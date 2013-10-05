// Copyright (c) 2007-2013 Hartmut Kaiser
// Copyright (c) 2012-2013 Thomas Heller
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

// This file has been automatically generated using the Boost.Wave tool.
// Do not edit manually.


        
namespace hpx { namespace util
{
    namespace detail
    {
        template <typename T0, typename UTuple>
        struct are_tuples_compatible<
            tuple<T0>, UTuple
          , typename boost::enable_if_c<
                tuple_size<typename remove_reference<UTuple>::type>::value == 1
            >::type
        >
        {
            typedef char(&no_type)[1];
            typedef char(&yes_type)[2];
            static no_type call(...);
            static yes_type call(T0);
            static bool const value =
                sizeof(
                    call(util::get< 0>( boost::declval<UTuple>()))
                ) == sizeof(yes_type);
            typedef boost::mpl::bool_<value> type;
        };
    }
    
    template <typename T0>
    class tuple<T0>
    {
    public:
        
        
        
        
        BOOST_CONSTEXPR tuple()
          : _m0()
        {}
        
        
        
        BOOST_CONSTEXPR explicit tuple(
            typename add_lvalue_reference<typename boost::add_const<T0>::type>::type v0
        ) : _m0(v0)
        {}
        
        
        
        
        
        template <typename U0>
        BOOST_CONSTEXPR explicit tuple(
            BOOST_FWD_REF(U0) u0
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<tuple<U0> >::type
                >::value
            >::type* = 0
        ) : _m0(boost::forward<U0>(u0))
        {}
        
        
        
        BOOST_CONSTEXPR tuple(tuple const& other)
          : _m0(other._m0)
        {}
        
        
        
        BOOST_CONSTEXPR tuple(BOOST_RV_REF(tuple) other)
          : _m0(boost::move(other._m0))
        {}
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        BOOST_CONSTEXPR tuple(
            BOOST_FWD_REF(UTuple) other
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<UTuple>::type
                >::value
            >::type* = 0
        ) : _m0(util::get< 0>(boost::forward<UTuple>(other)))
        {}
        
        
        
        
        
        tuple& operator=(tuple const& other)
        {
            _m0 = other._m0;;
            return *this;
        }
        
        
        
        
        
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            _m0 = boost::move(other._m0);;
            return *this;
        }
        
        
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        typename boost::enable_if_c<
            tuple_size<typename remove_reference<UTuple>::type>::value == 1
          , tuple&
        >::type
        operator=(BOOST_FWD_REF(UTuple) other)
        {
            _m0 = util::get< 0>(boost::forward<UTuple>(other));;
            return *this;
        }
        
        
        
        
        
        
        void swap(tuple& other)
            BOOST_NOEXCEPT_IF(true && BOOST_NOEXCEPT_EXPR((boost::swap(_m0._value, other._m0._value))))
        {
            boost::swap(_m0._value, other._m0._value);;
        }
    public: 
        detail::tuple_member<T0> _m0;;
    };
    
    
    
    
    template <typename T0>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    tuple<typename detail::make_tuple_element<T0>::type>
    make_tuple(BOOST_FWD_REF(T0) v0)
    {
        return
            tuple<typename detail::make_tuple_element<T0>::type>(
                boost::forward<T0>(v0)
            );
    }
    
    
    
    
    template <typename T0>
    BOOST_FORCEINLINE
    tuple<typename add_rvalue_reference<T0>::type>
    forward_as_tuple(BOOST_FWD_REF(T0) v0) BOOST_NOEXCEPT
    {
        return
            tuple<typename add_rvalue_reference<T0>::type>(
                boost::forward<T0>(v0)
            );
    }
    
    
    
    
    
    
    
    
    template <typename T0>
    BOOST_FORCEINLINE
    tuple<T0&>
    tie(T0& v0) BOOST_NOEXCEPT
    {
        return
            tuple<T0&>(
                v0
            );
    }
    
    
    
    
    
    template <typename TTuple, typename UTuple>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename boost::lazy_enable_if_c<
        tuple_size<typename remove_reference<TTuple>::type>::value
      + tuple_size<typename remove_reference<UTuple>::type>::value == 1
      , detail::tuple_cat_result<TTuple, UTuple>
    >::type
    tuple_cat(BOOST_FWD_REF(TTuple) t, BOOST_FWD_REF(UTuple) u)
    {
        return
            typename detail::tuple_cat_result<TTuple, UTuple>::type(
                detail::tuple_cat_element< 0, T0, T1>::call(t0, t1)
            );
    }
    
    
    
    template <typename T0>
    struct tuple_size<tuple<T0> >
      : boost::mpl::size_t<1>
    {};
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    struct tuple_element<0, tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19> >
      : boost::mpl::identity<T0>
    {
        template <typename Tuple>
        static BOOST_CONSTEXPR BOOST_FORCEINLINE
        typename detail::qualify_as<T0, Tuple&>::type
        get(Tuple& tuple) BOOST_NOEXCEPT
        {
            return tuple._m0._value;
        }
    };
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <typename T0 , typename T1, typename UTuple>
        struct are_tuples_compatible<
            tuple<T0 , T1>, UTuple
          , typename boost::enable_if_c<
                tuple_size<typename remove_reference<UTuple>::type>::value == 2
            >::type
        >
        {
            typedef char(&no_type)[1];
            typedef char(&yes_type)[2];
            static no_type call(...);
            static yes_type call(T0 , T1);
            static bool const value =
                sizeof(
                    call(util::get< 0>( boost::declval<UTuple>()) , util::get< 1>( boost::declval<UTuple>()))
                ) == sizeof(yes_type);
            typedef boost::mpl::bool_<value> type;
        };
    }
    
    template <typename T0 , typename T1>
    class tuple<T0 , T1>
    {
    public:
        
        
        
        
        BOOST_CONSTEXPR tuple()
          : _m0() , _m1()
        {}
        
        
        
        BOOST_CONSTEXPR explicit tuple(
            typename add_lvalue_reference<typename boost::add_const<T0>::type>::type v0 , typename add_lvalue_reference<typename boost::add_const<T1>::type>::type v1
        ) : _m0(v0) , _m1(v1)
        {}
        
        
        
        
        
        template <typename U0 , typename U1>
        BOOST_CONSTEXPR explicit tuple(
            BOOST_FWD_REF(U0) u0 , BOOST_FWD_REF(U1) u1
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<tuple<U0 , U1> >::type
                >::value
            >::type* = 0
        ) : _m0(boost::forward<U0>(u0)) , _m1(boost::forward<U1>(u1))
        {}
        
        
        
        BOOST_CONSTEXPR tuple(tuple const& other)
          : _m0(other._m0) , _m1(other._m1)
        {}
        
        
        
        BOOST_CONSTEXPR tuple(BOOST_RV_REF(tuple) other)
          : _m0(boost::move(other._m0)) , _m1(boost::move(other._m1))
        {}
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        BOOST_CONSTEXPR tuple(
            BOOST_FWD_REF(UTuple) other
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<UTuple>::type
                >::value
            >::type* = 0
        ) : _m0(util::get< 0>(boost::forward<UTuple>(other))) , _m1(util::get< 1>(boost::forward<UTuple>(other)))
        {}
        
        
        
        
        
        tuple& operator=(tuple const& other)
        {
            _m0 = other._m0; _m1 = other._m1;;
            return *this;
        }
        
        
        
        
        
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            _m0 = boost::move(other._m0); _m1 = boost::move(other._m1);;
            return *this;
        }
        
        
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        typename boost::enable_if_c<
            tuple_size<typename remove_reference<UTuple>::type>::value == 2
          , tuple&
        >::type
        operator=(BOOST_FWD_REF(UTuple) other)
        {
            _m0 = util::get< 0>(boost::forward<UTuple>(other)); _m1 = util::get< 1>(boost::forward<UTuple>(other));;
            return *this;
        }
        
        
        
        
        
        
        void swap(tuple& other)
            BOOST_NOEXCEPT_IF(true && BOOST_NOEXCEPT_EXPR((boost::swap(_m0._value, other._m0._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m1._value, other._m1._value))))
        {
            boost::swap(_m0._value, other._m0._value); boost::swap(_m1._value, other._m1._value);;
        }
    public: 
        detail::tuple_member<T0> _m0; detail::tuple_member<T1> _m1;;
    };
    
    
    
    
    template <typename T0 , typename T1>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type>
    make_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1)
    {
        return
            tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1)
            );
    }
    
    
    
    
    template <typename T0 , typename T1>
    BOOST_FORCEINLINE
    tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type>
    forward_as_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1) BOOST_NOEXCEPT
    {
        return
            tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1)
            );
    }
    
    
    
    
    
    
    
    
    template <typename T0 , typename T1>
    BOOST_FORCEINLINE
    tuple<T0& , T1&>
    tie(T0& v0 , T1& v1) BOOST_NOEXCEPT
    {
        return
            tuple<T0& , T1&>(
                v0 , v1
            );
    }
    
    
    
    
    
    template <typename TTuple, typename UTuple>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename boost::lazy_enable_if_c<
        tuple_size<typename remove_reference<TTuple>::type>::value
      + tuple_size<typename remove_reference<UTuple>::type>::value == 2
      , detail::tuple_cat_result<TTuple, UTuple>
    >::type
    tuple_cat(BOOST_FWD_REF(TTuple) t, BOOST_FWD_REF(UTuple) u)
    {
        return
            typename detail::tuple_cat_result<TTuple, UTuple>::type(
                detail::tuple_cat_element< 0, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 1, T0, T1>::call(t0, t1)
            );
    }
    
    
    
    template <typename T0 , typename T1>
    struct tuple_size<tuple<T0 , T1> >
      : boost::mpl::size_t<2>
    {};
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    struct tuple_element<1, tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19> >
      : boost::mpl::identity<T1>
    {
        template <typename Tuple>
        static BOOST_CONSTEXPR BOOST_FORCEINLINE
        typename detail::qualify_as<T1, Tuple&>::type
        get(Tuple& tuple) BOOST_NOEXCEPT
        {
            return tuple._m1._value;
        }
    };
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <typename T0 , typename T1 , typename T2, typename UTuple>
        struct are_tuples_compatible<
            tuple<T0 , T1 , T2>, UTuple
          , typename boost::enable_if_c<
                tuple_size<typename remove_reference<UTuple>::type>::value == 3
            >::type
        >
        {
            typedef char(&no_type)[1];
            typedef char(&yes_type)[2];
            static no_type call(...);
            static yes_type call(T0 , T1 , T2);
            static bool const value =
                sizeof(
                    call(util::get< 0>( boost::declval<UTuple>()) , util::get< 1>( boost::declval<UTuple>()) , util::get< 2>( boost::declval<UTuple>()))
                ) == sizeof(yes_type);
            typedef boost::mpl::bool_<value> type;
        };
    }
    
    template <typename T0 , typename T1 , typename T2>
    class tuple<T0 , T1 , T2>
    {
    public:
        
        
        
        
        BOOST_CONSTEXPR tuple()
          : _m0() , _m1() , _m2()
        {}
        
        
        
        BOOST_CONSTEXPR explicit tuple(
            typename add_lvalue_reference<typename boost::add_const<T0>::type>::type v0 , typename add_lvalue_reference<typename boost::add_const<T1>::type>::type v1 , typename add_lvalue_reference<typename boost::add_const<T2>::type>::type v2
        ) : _m0(v0) , _m1(v1) , _m2(v2)
        {}
        
        
        
        
        
        template <typename U0 , typename U1 , typename U2>
        BOOST_CONSTEXPR explicit tuple(
            BOOST_FWD_REF(U0) u0 , BOOST_FWD_REF(U1) u1 , BOOST_FWD_REF(U2) u2
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<tuple<U0 , U1 , U2> >::type
                >::value
            >::type* = 0
        ) : _m0(boost::forward<U0>(u0)) , _m1(boost::forward<U1>(u1)) , _m2(boost::forward<U2>(u2))
        {}
        
        
        
        BOOST_CONSTEXPR tuple(tuple const& other)
          : _m0(other._m0) , _m1(other._m1) , _m2(other._m2)
        {}
        
        
        
        BOOST_CONSTEXPR tuple(BOOST_RV_REF(tuple) other)
          : _m0(boost::move(other._m0)) , _m1(boost::move(other._m1)) , _m2(boost::move(other._m2))
        {}
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        BOOST_CONSTEXPR tuple(
            BOOST_FWD_REF(UTuple) other
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<UTuple>::type
                >::value
            >::type* = 0
        ) : _m0(util::get< 0>(boost::forward<UTuple>(other))) , _m1(util::get< 1>(boost::forward<UTuple>(other))) , _m2(util::get< 2>(boost::forward<UTuple>(other)))
        {}
        
        
        
        
        
        tuple& operator=(tuple const& other)
        {
            _m0 = other._m0; _m1 = other._m1; _m2 = other._m2;;
            return *this;
        }
        
        
        
        
        
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            _m0 = boost::move(other._m0); _m1 = boost::move(other._m1); _m2 = boost::move(other._m2);;
            return *this;
        }
        
        
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        typename boost::enable_if_c<
            tuple_size<typename remove_reference<UTuple>::type>::value == 3
          , tuple&
        >::type
        operator=(BOOST_FWD_REF(UTuple) other)
        {
            _m0 = util::get< 0>(boost::forward<UTuple>(other)); _m1 = util::get< 1>(boost::forward<UTuple>(other)); _m2 = util::get< 2>(boost::forward<UTuple>(other));;
            return *this;
        }
        
        
        
        
        
        
        void swap(tuple& other)
            BOOST_NOEXCEPT_IF(true && BOOST_NOEXCEPT_EXPR((boost::swap(_m0._value, other._m0._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m1._value, other._m1._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m2._value, other._m2._value))))
        {
            boost::swap(_m0._value, other._m0._value); boost::swap(_m1._value, other._m1._value); boost::swap(_m2._value, other._m2._value);;
        }
    public: 
        detail::tuple_member<T0> _m0; detail::tuple_member<T1> _m1; detail::tuple_member<T2> _m2;;
    };
    
    
    
    
    template <typename T0 , typename T1 , typename T2>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type>
    make_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2)
    {
        return
            tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2)
            );
    }
    
    
    
    
    template <typename T0 , typename T1 , typename T2>
    BOOST_FORCEINLINE
    tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type>
    forward_as_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2) BOOST_NOEXCEPT
    {
        return
            tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2)
            );
    }
    
    
    
    
    
    
    
    
    template <typename T0 , typename T1 , typename T2>
    BOOST_FORCEINLINE
    tuple<T0& , T1& , T2&>
    tie(T0& v0 , T1& v1 , T2& v2) BOOST_NOEXCEPT
    {
        return
            tuple<T0& , T1& , T2&>(
                v0 , v1 , v2
            );
    }
    
    
    
    
    
    template <typename TTuple, typename UTuple>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename boost::lazy_enable_if_c<
        tuple_size<typename remove_reference<TTuple>::type>::value
      + tuple_size<typename remove_reference<UTuple>::type>::value == 3
      , detail::tuple_cat_result<TTuple, UTuple>
    >::type
    tuple_cat(BOOST_FWD_REF(TTuple) t, BOOST_FWD_REF(UTuple) u)
    {
        return
            typename detail::tuple_cat_result<TTuple, UTuple>::type(
                detail::tuple_cat_element< 0, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 1, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 2, T0, T1>::call(t0, t1)
            );
    }
    template <typename T0 , typename T1 , typename T2>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename detail::tuple_cat_result<
        T0 , T1 , T2
    >::type
    tuple_cat(BOOST_FWD_REF(T0) t0 , BOOST_FWD_REF(T1) t1 , BOOST_FWD_REF(T2) t2)
    {
        return
            util::tuple_cat(
                util::tuple_cat( boost::forward<T0> (t0) , boost::forward<T1> (t1))
              , boost::forward<T2>
                    (t2)
            );
    }
    
    
    
    template <typename T0 , typename T1 , typename T2>
    struct tuple_size<tuple<T0 , T1 , T2> >
      : boost::mpl::size_t<3>
    {};
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    struct tuple_element<2, tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19> >
      : boost::mpl::identity<T2>
    {
        template <typename Tuple>
        static BOOST_CONSTEXPR BOOST_FORCEINLINE
        typename detail::qualify_as<T2, Tuple&>::type
        get(Tuple& tuple) BOOST_NOEXCEPT
        {
            return tuple._m2._value;
        }
    };
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <typename T0 , typename T1 , typename T2 , typename T3, typename UTuple>
        struct are_tuples_compatible<
            tuple<T0 , T1 , T2 , T3>, UTuple
          , typename boost::enable_if_c<
                tuple_size<typename remove_reference<UTuple>::type>::value == 4
            >::type
        >
        {
            typedef char(&no_type)[1];
            typedef char(&yes_type)[2];
            static no_type call(...);
            static yes_type call(T0 , T1 , T2 , T3);
            static bool const value =
                sizeof(
                    call(util::get< 0>( boost::declval<UTuple>()) , util::get< 1>( boost::declval<UTuple>()) , util::get< 2>( boost::declval<UTuple>()) , util::get< 3>( boost::declval<UTuple>()))
                ) == sizeof(yes_type);
            typedef boost::mpl::bool_<value> type;
        };
    }
    
    template <typename T0 , typename T1 , typename T2 , typename T3>
    class tuple<T0 , T1 , T2 , T3>
    {
    public:
        
        
        
        
        BOOST_CONSTEXPR tuple()
          : _m0() , _m1() , _m2() , _m3()
        {}
        
        
        
        BOOST_CONSTEXPR explicit tuple(
            typename add_lvalue_reference<typename boost::add_const<T0>::type>::type v0 , typename add_lvalue_reference<typename boost::add_const<T1>::type>::type v1 , typename add_lvalue_reference<typename boost::add_const<T2>::type>::type v2 , typename add_lvalue_reference<typename boost::add_const<T3>::type>::type v3
        ) : _m0(v0) , _m1(v1) , _m2(v2) , _m3(v3)
        {}
        
        
        
        
        
        template <typename U0 , typename U1 , typename U2 , typename U3>
        BOOST_CONSTEXPR explicit tuple(
            BOOST_FWD_REF(U0) u0 , BOOST_FWD_REF(U1) u1 , BOOST_FWD_REF(U2) u2 , BOOST_FWD_REF(U3) u3
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<tuple<U0 , U1 , U2 , U3> >::type
                >::value
            >::type* = 0
        ) : _m0(boost::forward<U0>(u0)) , _m1(boost::forward<U1>(u1)) , _m2(boost::forward<U2>(u2)) , _m3(boost::forward<U3>(u3))
        {}
        
        
        
        BOOST_CONSTEXPR tuple(tuple const& other)
          : _m0(other._m0) , _m1(other._m1) , _m2(other._m2) , _m3(other._m3)
        {}
        
        
        
        BOOST_CONSTEXPR tuple(BOOST_RV_REF(tuple) other)
          : _m0(boost::move(other._m0)) , _m1(boost::move(other._m1)) , _m2(boost::move(other._m2)) , _m3(boost::move(other._m3))
        {}
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        BOOST_CONSTEXPR tuple(
            BOOST_FWD_REF(UTuple) other
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<UTuple>::type
                >::value
            >::type* = 0
        ) : _m0(util::get< 0>(boost::forward<UTuple>(other))) , _m1(util::get< 1>(boost::forward<UTuple>(other))) , _m2(util::get< 2>(boost::forward<UTuple>(other))) , _m3(util::get< 3>(boost::forward<UTuple>(other)))
        {}
        
        
        
        
        
        tuple& operator=(tuple const& other)
        {
            _m0 = other._m0; _m1 = other._m1; _m2 = other._m2; _m3 = other._m3;;
            return *this;
        }
        
        
        
        
        
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            _m0 = boost::move(other._m0); _m1 = boost::move(other._m1); _m2 = boost::move(other._m2); _m3 = boost::move(other._m3);;
            return *this;
        }
        
        
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        typename boost::enable_if_c<
            tuple_size<typename remove_reference<UTuple>::type>::value == 4
          , tuple&
        >::type
        operator=(BOOST_FWD_REF(UTuple) other)
        {
            _m0 = util::get< 0>(boost::forward<UTuple>(other)); _m1 = util::get< 1>(boost::forward<UTuple>(other)); _m2 = util::get< 2>(boost::forward<UTuple>(other)); _m3 = util::get< 3>(boost::forward<UTuple>(other));;
            return *this;
        }
        
        
        
        
        
        
        void swap(tuple& other)
            BOOST_NOEXCEPT_IF(true && BOOST_NOEXCEPT_EXPR((boost::swap(_m0._value, other._m0._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m1._value, other._m1._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m2._value, other._m2._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m3._value, other._m3._value))))
        {
            boost::swap(_m0._value, other._m0._value); boost::swap(_m1._value, other._m1._value); boost::swap(_m2._value, other._m2._value); boost::swap(_m3._value, other._m3._value);;
        }
    public: 
        detail::tuple_member<T0> _m0; detail::tuple_member<T1> _m1; detail::tuple_member<T2> _m2; detail::tuple_member<T3> _m3;;
    };
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type>
    make_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3)
    {
        return
            tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3)
            );
    }
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3>
    BOOST_FORCEINLINE
    tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type>
    forward_as_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3) BOOST_NOEXCEPT
    {
        return
            tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3)
            );
    }
    
    
    
    
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3>
    BOOST_FORCEINLINE
    tuple<T0& , T1& , T2& , T3&>
    tie(T0& v0 , T1& v1 , T2& v2 , T3& v3) BOOST_NOEXCEPT
    {
        return
            tuple<T0& , T1& , T2& , T3&>(
                v0 , v1 , v2 , v3
            );
    }
    
    
    
    
    
    template <typename TTuple, typename UTuple>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename boost::lazy_enable_if_c<
        tuple_size<typename remove_reference<TTuple>::type>::value
      + tuple_size<typename remove_reference<UTuple>::type>::value == 4
      , detail::tuple_cat_result<TTuple, UTuple>
    >::type
    tuple_cat(BOOST_FWD_REF(TTuple) t, BOOST_FWD_REF(UTuple) u)
    {
        return
            typename detail::tuple_cat_result<TTuple, UTuple>::type(
                detail::tuple_cat_element< 0, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 1, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 2, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 3, T0, T1>::call(t0, t1)
            );
    }
    template <typename T0 , typename T1 , typename T2 , typename T3>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename detail::tuple_cat_result<
        T0 , T1 , T2 , T3
    >::type
    tuple_cat(BOOST_FWD_REF(T0) t0 , BOOST_FWD_REF(T1) t1 , BOOST_FWD_REF(T2) t2 , BOOST_FWD_REF(T3) t3)
    {
        return
            util::tuple_cat(
                util::tuple_cat( boost::forward<T0> (t0) , boost::forward<T1> (t1)) , util::tuple_cat( boost::forward<T2> (t2) , boost::forward<T3> (t3))
            );
    }
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3>
    struct tuple_size<tuple<T0 , T1 , T2 , T3> >
      : boost::mpl::size_t<4>
    {};
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    struct tuple_element<3, tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19> >
      : boost::mpl::identity<T3>
    {
        template <typename Tuple>
        static BOOST_CONSTEXPR BOOST_FORCEINLINE
        typename detail::qualify_as<T3, Tuple&>::type
        get(Tuple& tuple) BOOST_NOEXCEPT
        {
            return tuple._m3._value;
        }
    };
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4, typename UTuple>
        struct are_tuples_compatible<
            tuple<T0 , T1 , T2 , T3 , T4>, UTuple
          , typename boost::enable_if_c<
                tuple_size<typename remove_reference<UTuple>::type>::value == 5
            >::type
        >
        {
            typedef char(&no_type)[1];
            typedef char(&yes_type)[2];
            static no_type call(...);
            static yes_type call(T0 , T1 , T2 , T3 , T4);
            static bool const value =
                sizeof(
                    call(util::get< 0>( boost::declval<UTuple>()) , util::get< 1>( boost::declval<UTuple>()) , util::get< 2>( boost::declval<UTuple>()) , util::get< 3>( boost::declval<UTuple>()) , util::get< 4>( boost::declval<UTuple>()))
                ) == sizeof(yes_type);
            typedef boost::mpl::bool_<value> type;
        };
    }
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4>
    class tuple<T0 , T1 , T2 , T3 , T4>
    {
    public:
        
        
        
        
        BOOST_CONSTEXPR tuple()
          : _m0() , _m1() , _m2() , _m3() , _m4()
        {}
        
        
        
        BOOST_CONSTEXPR explicit tuple(
            typename add_lvalue_reference<typename boost::add_const<T0>::type>::type v0 , typename add_lvalue_reference<typename boost::add_const<T1>::type>::type v1 , typename add_lvalue_reference<typename boost::add_const<T2>::type>::type v2 , typename add_lvalue_reference<typename boost::add_const<T3>::type>::type v3 , typename add_lvalue_reference<typename boost::add_const<T4>::type>::type v4
        ) : _m0(v0) , _m1(v1) , _m2(v2) , _m3(v3) , _m4(v4)
        {}
        
        
        
        
        
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4>
        BOOST_CONSTEXPR explicit tuple(
            BOOST_FWD_REF(U0) u0 , BOOST_FWD_REF(U1) u1 , BOOST_FWD_REF(U2) u2 , BOOST_FWD_REF(U3) u3 , BOOST_FWD_REF(U4) u4
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<tuple<U0 , U1 , U2 , U3 , U4> >::type
                >::value
            >::type* = 0
        ) : _m0(boost::forward<U0>(u0)) , _m1(boost::forward<U1>(u1)) , _m2(boost::forward<U2>(u2)) , _m3(boost::forward<U3>(u3)) , _m4(boost::forward<U4>(u4))
        {}
        
        
        
        BOOST_CONSTEXPR tuple(tuple const& other)
          : _m0(other._m0) , _m1(other._m1) , _m2(other._m2) , _m3(other._m3) , _m4(other._m4)
        {}
        
        
        
        BOOST_CONSTEXPR tuple(BOOST_RV_REF(tuple) other)
          : _m0(boost::move(other._m0)) , _m1(boost::move(other._m1)) , _m2(boost::move(other._m2)) , _m3(boost::move(other._m3)) , _m4(boost::move(other._m4))
        {}
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        BOOST_CONSTEXPR tuple(
            BOOST_FWD_REF(UTuple) other
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<UTuple>::type
                >::value
            >::type* = 0
        ) : _m0(util::get< 0>(boost::forward<UTuple>(other))) , _m1(util::get< 1>(boost::forward<UTuple>(other))) , _m2(util::get< 2>(boost::forward<UTuple>(other))) , _m3(util::get< 3>(boost::forward<UTuple>(other))) , _m4(util::get< 4>(boost::forward<UTuple>(other)))
        {}
        
        
        
        
        
        tuple& operator=(tuple const& other)
        {
            _m0 = other._m0; _m1 = other._m1; _m2 = other._m2; _m3 = other._m3; _m4 = other._m4;;
            return *this;
        }
        
        
        
        
        
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            _m0 = boost::move(other._m0); _m1 = boost::move(other._m1); _m2 = boost::move(other._m2); _m3 = boost::move(other._m3); _m4 = boost::move(other._m4);;
            return *this;
        }
        
        
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        typename boost::enable_if_c<
            tuple_size<typename remove_reference<UTuple>::type>::value == 5
          , tuple&
        >::type
        operator=(BOOST_FWD_REF(UTuple) other)
        {
            _m0 = util::get< 0>(boost::forward<UTuple>(other)); _m1 = util::get< 1>(boost::forward<UTuple>(other)); _m2 = util::get< 2>(boost::forward<UTuple>(other)); _m3 = util::get< 3>(boost::forward<UTuple>(other)); _m4 = util::get< 4>(boost::forward<UTuple>(other));;
            return *this;
        }
        
        
        
        
        
        
        void swap(tuple& other)
            BOOST_NOEXCEPT_IF(true && BOOST_NOEXCEPT_EXPR((boost::swap(_m0._value, other._m0._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m1._value, other._m1._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m2._value, other._m2._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m3._value, other._m3._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m4._value, other._m4._value))))
        {
            boost::swap(_m0._value, other._m0._value); boost::swap(_m1._value, other._m1._value); boost::swap(_m2._value, other._m2._value); boost::swap(_m3._value, other._m3._value); boost::swap(_m4._value, other._m4._value);;
        }
    public: 
        detail::tuple_member<T0> _m0; detail::tuple_member<T1> _m1; detail::tuple_member<T2> _m2; detail::tuple_member<T3> _m3; detail::tuple_member<T4> _m4;;
    };
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type>
    make_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4)
    {
        return
            tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4)
            );
    }
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4>
    BOOST_FORCEINLINE
    tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type>
    forward_as_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4) BOOST_NOEXCEPT
    {
        return
            tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4)
            );
    }
    
    
    
    
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4>
    BOOST_FORCEINLINE
    tuple<T0& , T1& , T2& , T3& , T4&>
    tie(T0& v0 , T1& v1 , T2& v2 , T3& v3 , T4& v4) BOOST_NOEXCEPT
    {
        return
            tuple<T0& , T1& , T2& , T3& , T4&>(
                v0 , v1 , v2 , v3 , v4
            );
    }
    
    
    
    
    
    template <typename TTuple, typename UTuple>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename boost::lazy_enable_if_c<
        tuple_size<typename remove_reference<TTuple>::type>::value
      + tuple_size<typename remove_reference<UTuple>::type>::value == 5
      , detail::tuple_cat_result<TTuple, UTuple>
    >::type
    tuple_cat(BOOST_FWD_REF(TTuple) t, BOOST_FWD_REF(UTuple) u)
    {
        return
            typename detail::tuple_cat_result<TTuple, UTuple>::type(
                detail::tuple_cat_element< 0, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 1, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 2, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 3, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 4, T0, T1>::call(t0, t1)
            );
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename detail::tuple_cat_result<
        T0 , T1 , T2 , T3 , T4
    >::type
    tuple_cat(BOOST_FWD_REF(T0) t0 , BOOST_FWD_REF(T1) t1 , BOOST_FWD_REF(T2) t2 , BOOST_FWD_REF(T3) t3 , BOOST_FWD_REF(T4) t4)
    {
        return
            util::tuple_cat(
                util::tuple_cat( boost::forward<T0> (t0) , boost::forward<T1> (t1)) , util::tuple_cat( boost::forward<T2> (t2) , boost::forward<T3> (t3))
              , boost::forward<T4>
                    (t4)
            );
    }
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4>
    struct tuple_size<tuple<T0 , T1 , T2 , T3 , T4> >
      : boost::mpl::size_t<5>
    {};
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    struct tuple_element<4, tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19> >
      : boost::mpl::identity<T4>
    {
        template <typename Tuple>
        static BOOST_CONSTEXPR BOOST_FORCEINLINE
        typename detail::qualify_as<T4, Tuple&>::type
        get(Tuple& tuple) BOOST_NOEXCEPT
        {
            return tuple._m4._value;
        }
    };
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5, typename UTuple>
        struct are_tuples_compatible<
            tuple<T0 , T1 , T2 , T3 , T4 , T5>, UTuple
          , typename boost::enable_if_c<
                tuple_size<typename remove_reference<UTuple>::type>::value == 6
            >::type
        >
        {
            typedef char(&no_type)[1];
            typedef char(&yes_type)[2];
            static no_type call(...);
            static yes_type call(T0 , T1 , T2 , T3 , T4 , T5);
            static bool const value =
                sizeof(
                    call(util::get< 0>( boost::declval<UTuple>()) , util::get< 1>( boost::declval<UTuple>()) , util::get< 2>( boost::declval<UTuple>()) , util::get< 3>( boost::declval<UTuple>()) , util::get< 4>( boost::declval<UTuple>()) , util::get< 5>( boost::declval<UTuple>()))
                ) == sizeof(yes_type);
            typedef boost::mpl::bool_<value> type;
        };
    }
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5>
    class tuple<T0 , T1 , T2 , T3 , T4 , T5>
    {
    public:
        
        
        
        
        BOOST_CONSTEXPR tuple()
          : _m0() , _m1() , _m2() , _m3() , _m4() , _m5()
        {}
        
        
        
        BOOST_CONSTEXPR explicit tuple(
            typename add_lvalue_reference<typename boost::add_const<T0>::type>::type v0 , typename add_lvalue_reference<typename boost::add_const<T1>::type>::type v1 , typename add_lvalue_reference<typename boost::add_const<T2>::type>::type v2 , typename add_lvalue_reference<typename boost::add_const<T3>::type>::type v3 , typename add_lvalue_reference<typename boost::add_const<T4>::type>::type v4 , typename add_lvalue_reference<typename boost::add_const<T5>::type>::type v5
        ) : _m0(v0) , _m1(v1) , _m2(v2) , _m3(v3) , _m4(v4) , _m5(v5)
        {}
        
        
        
        
        
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5>
        BOOST_CONSTEXPR explicit tuple(
            BOOST_FWD_REF(U0) u0 , BOOST_FWD_REF(U1) u1 , BOOST_FWD_REF(U2) u2 , BOOST_FWD_REF(U3) u3 , BOOST_FWD_REF(U4) u4 , BOOST_FWD_REF(U5) u5
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<tuple<U0 , U1 , U2 , U3 , U4 , U5> >::type
                >::value
            >::type* = 0
        ) : _m0(boost::forward<U0>(u0)) , _m1(boost::forward<U1>(u1)) , _m2(boost::forward<U2>(u2)) , _m3(boost::forward<U3>(u3)) , _m4(boost::forward<U4>(u4)) , _m5(boost::forward<U5>(u5))
        {}
        
        
        
        BOOST_CONSTEXPR tuple(tuple const& other)
          : _m0(other._m0) , _m1(other._m1) , _m2(other._m2) , _m3(other._m3) , _m4(other._m4) , _m5(other._m5)
        {}
        
        
        
        BOOST_CONSTEXPR tuple(BOOST_RV_REF(tuple) other)
          : _m0(boost::move(other._m0)) , _m1(boost::move(other._m1)) , _m2(boost::move(other._m2)) , _m3(boost::move(other._m3)) , _m4(boost::move(other._m4)) , _m5(boost::move(other._m5))
        {}
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        BOOST_CONSTEXPR tuple(
            BOOST_FWD_REF(UTuple) other
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<UTuple>::type
                >::value
            >::type* = 0
        ) : _m0(util::get< 0>(boost::forward<UTuple>(other))) , _m1(util::get< 1>(boost::forward<UTuple>(other))) , _m2(util::get< 2>(boost::forward<UTuple>(other))) , _m3(util::get< 3>(boost::forward<UTuple>(other))) , _m4(util::get< 4>(boost::forward<UTuple>(other))) , _m5(util::get< 5>(boost::forward<UTuple>(other)))
        {}
        
        
        
        
        
        tuple& operator=(tuple const& other)
        {
            _m0 = other._m0; _m1 = other._m1; _m2 = other._m2; _m3 = other._m3; _m4 = other._m4; _m5 = other._m5;;
            return *this;
        }
        
        
        
        
        
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            _m0 = boost::move(other._m0); _m1 = boost::move(other._m1); _m2 = boost::move(other._m2); _m3 = boost::move(other._m3); _m4 = boost::move(other._m4); _m5 = boost::move(other._m5);;
            return *this;
        }
        
        
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        typename boost::enable_if_c<
            tuple_size<typename remove_reference<UTuple>::type>::value == 6
          , tuple&
        >::type
        operator=(BOOST_FWD_REF(UTuple) other)
        {
            _m0 = util::get< 0>(boost::forward<UTuple>(other)); _m1 = util::get< 1>(boost::forward<UTuple>(other)); _m2 = util::get< 2>(boost::forward<UTuple>(other)); _m3 = util::get< 3>(boost::forward<UTuple>(other)); _m4 = util::get< 4>(boost::forward<UTuple>(other)); _m5 = util::get< 5>(boost::forward<UTuple>(other));;
            return *this;
        }
        
        
        
        
        
        
        void swap(tuple& other)
            BOOST_NOEXCEPT_IF(true && BOOST_NOEXCEPT_EXPR((boost::swap(_m0._value, other._m0._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m1._value, other._m1._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m2._value, other._m2._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m3._value, other._m3._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m4._value, other._m4._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m5._value, other._m5._value))))
        {
            boost::swap(_m0._value, other._m0._value); boost::swap(_m1._value, other._m1._value); boost::swap(_m2._value, other._m2._value); boost::swap(_m3._value, other._m3._value); boost::swap(_m4._value, other._m4._value); boost::swap(_m5._value, other._m5._value);;
        }
    public: 
        detail::tuple_member<T0> _m0; detail::tuple_member<T1> _m1; detail::tuple_member<T2> _m2; detail::tuple_member<T3> _m3; detail::tuple_member<T4> _m4; detail::tuple_member<T5> _m5;;
    };
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type>
    make_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5)
    {
        return
            tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5)
            );
    }
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5>
    BOOST_FORCEINLINE
    tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type>
    forward_as_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5) BOOST_NOEXCEPT
    {
        return
            tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5)
            );
    }
    
    
    
    
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5>
    BOOST_FORCEINLINE
    tuple<T0& , T1& , T2& , T3& , T4& , T5&>
    tie(T0& v0 , T1& v1 , T2& v2 , T3& v3 , T4& v4 , T5& v5) BOOST_NOEXCEPT
    {
        return
            tuple<T0& , T1& , T2& , T3& , T4& , T5&>(
                v0 , v1 , v2 , v3 , v4 , v5
            );
    }
    
    
    
    
    
    template <typename TTuple, typename UTuple>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename boost::lazy_enable_if_c<
        tuple_size<typename remove_reference<TTuple>::type>::value
      + tuple_size<typename remove_reference<UTuple>::type>::value == 6
      , detail::tuple_cat_result<TTuple, UTuple>
    >::type
    tuple_cat(BOOST_FWD_REF(TTuple) t, BOOST_FWD_REF(UTuple) u)
    {
        return
            typename detail::tuple_cat_result<TTuple, UTuple>::type(
                detail::tuple_cat_element< 0, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 1, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 2, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 3, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 4, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 5, T0, T1>::call(t0, t1)
            );
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename detail::tuple_cat_result<
        T0 , T1 , T2 , T3 , T4 , T5
    >::type
    tuple_cat(BOOST_FWD_REF(T0) t0 , BOOST_FWD_REF(T1) t1 , BOOST_FWD_REF(T2) t2 , BOOST_FWD_REF(T3) t3 , BOOST_FWD_REF(T4) t4 , BOOST_FWD_REF(T5) t5)
    {
        return
            util::tuple_cat(
                util::tuple_cat( boost::forward<T0> (t0) , boost::forward<T1> (t1)) , util::tuple_cat( boost::forward<T2> (t2) , boost::forward<T3> (t3)) , util::tuple_cat( boost::forward<T4> (t4) , boost::forward<T5> (t5))
            );
    }
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5>
    struct tuple_size<tuple<T0 , T1 , T2 , T3 , T4 , T5> >
      : boost::mpl::size_t<6>
    {};
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    struct tuple_element<5, tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19> >
      : boost::mpl::identity<T5>
    {
        template <typename Tuple>
        static BOOST_CONSTEXPR BOOST_FORCEINLINE
        typename detail::qualify_as<T5, Tuple&>::type
        get(Tuple& tuple) BOOST_NOEXCEPT
        {
            return tuple._m5._value;
        }
    };
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6, typename UTuple>
        struct are_tuples_compatible<
            tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6>, UTuple
          , typename boost::enable_if_c<
                tuple_size<typename remove_reference<UTuple>::type>::value == 7
            >::type
        >
        {
            typedef char(&no_type)[1];
            typedef char(&yes_type)[2];
            static no_type call(...);
            static yes_type call(T0 , T1 , T2 , T3 , T4 , T5 , T6);
            static bool const value =
                sizeof(
                    call(util::get< 0>( boost::declval<UTuple>()) , util::get< 1>( boost::declval<UTuple>()) , util::get< 2>( boost::declval<UTuple>()) , util::get< 3>( boost::declval<UTuple>()) , util::get< 4>( boost::declval<UTuple>()) , util::get< 5>( boost::declval<UTuple>()) , util::get< 6>( boost::declval<UTuple>()))
                ) == sizeof(yes_type);
            typedef boost::mpl::bool_<value> type;
        };
    }
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6>
    class tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6>
    {
    public:
        
        
        
        
        BOOST_CONSTEXPR tuple()
          : _m0() , _m1() , _m2() , _m3() , _m4() , _m5() , _m6()
        {}
        
        
        
        BOOST_CONSTEXPR explicit tuple(
            typename add_lvalue_reference<typename boost::add_const<T0>::type>::type v0 , typename add_lvalue_reference<typename boost::add_const<T1>::type>::type v1 , typename add_lvalue_reference<typename boost::add_const<T2>::type>::type v2 , typename add_lvalue_reference<typename boost::add_const<T3>::type>::type v3 , typename add_lvalue_reference<typename boost::add_const<T4>::type>::type v4 , typename add_lvalue_reference<typename boost::add_const<T5>::type>::type v5 , typename add_lvalue_reference<typename boost::add_const<T6>::type>::type v6
        ) : _m0(v0) , _m1(v1) , _m2(v2) , _m3(v3) , _m4(v4) , _m5(v5) , _m6(v6)
        {}
        
        
        
        
        
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6>
        BOOST_CONSTEXPR explicit tuple(
            BOOST_FWD_REF(U0) u0 , BOOST_FWD_REF(U1) u1 , BOOST_FWD_REF(U2) u2 , BOOST_FWD_REF(U3) u3 , BOOST_FWD_REF(U4) u4 , BOOST_FWD_REF(U5) u5 , BOOST_FWD_REF(U6) u6
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<tuple<U0 , U1 , U2 , U3 , U4 , U5 , U6> >::type
                >::value
            >::type* = 0
        ) : _m0(boost::forward<U0>(u0)) , _m1(boost::forward<U1>(u1)) , _m2(boost::forward<U2>(u2)) , _m3(boost::forward<U3>(u3)) , _m4(boost::forward<U4>(u4)) , _m5(boost::forward<U5>(u5)) , _m6(boost::forward<U6>(u6))
        {}
        
        
        
        BOOST_CONSTEXPR tuple(tuple const& other)
          : _m0(other._m0) , _m1(other._m1) , _m2(other._m2) , _m3(other._m3) , _m4(other._m4) , _m5(other._m5) , _m6(other._m6)
        {}
        
        
        
        BOOST_CONSTEXPR tuple(BOOST_RV_REF(tuple) other)
          : _m0(boost::move(other._m0)) , _m1(boost::move(other._m1)) , _m2(boost::move(other._m2)) , _m3(boost::move(other._m3)) , _m4(boost::move(other._m4)) , _m5(boost::move(other._m5)) , _m6(boost::move(other._m6))
        {}
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        BOOST_CONSTEXPR tuple(
            BOOST_FWD_REF(UTuple) other
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<UTuple>::type
                >::value
            >::type* = 0
        ) : _m0(util::get< 0>(boost::forward<UTuple>(other))) , _m1(util::get< 1>(boost::forward<UTuple>(other))) , _m2(util::get< 2>(boost::forward<UTuple>(other))) , _m3(util::get< 3>(boost::forward<UTuple>(other))) , _m4(util::get< 4>(boost::forward<UTuple>(other))) , _m5(util::get< 5>(boost::forward<UTuple>(other))) , _m6(util::get< 6>(boost::forward<UTuple>(other)))
        {}
        
        
        
        
        
        tuple& operator=(tuple const& other)
        {
            _m0 = other._m0; _m1 = other._m1; _m2 = other._m2; _m3 = other._m3; _m4 = other._m4; _m5 = other._m5; _m6 = other._m6;;
            return *this;
        }
        
        
        
        
        
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            _m0 = boost::move(other._m0); _m1 = boost::move(other._m1); _m2 = boost::move(other._m2); _m3 = boost::move(other._m3); _m4 = boost::move(other._m4); _m5 = boost::move(other._m5); _m6 = boost::move(other._m6);;
            return *this;
        }
        
        
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        typename boost::enable_if_c<
            tuple_size<typename remove_reference<UTuple>::type>::value == 7
          , tuple&
        >::type
        operator=(BOOST_FWD_REF(UTuple) other)
        {
            _m0 = util::get< 0>(boost::forward<UTuple>(other)); _m1 = util::get< 1>(boost::forward<UTuple>(other)); _m2 = util::get< 2>(boost::forward<UTuple>(other)); _m3 = util::get< 3>(boost::forward<UTuple>(other)); _m4 = util::get< 4>(boost::forward<UTuple>(other)); _m5 = util::get< 5>(boost::forward<UTuple>(other)); _m6 = util::get< 6>(boost::forward<UTuple>(other));;
            return *this;
        }
        
        
        
        
        
        
        void swap(tuple& other)
            BOOST_NOEXCEPT_IF(true && BOOST_NOEXCEPT_EXPR((boost::swap(_m0._value, other._m0._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m1._value, other._m1._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m2._value, other._m2._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m3._value, other._m3._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m4._value, other._m4._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m5._value, other._m5._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m6._value, other._m6._value))))
        {
            boost::swap(_m0._value, other._m0._value); boost::swap(_m1._value, other._m1._value); boost::swap(_m2._value, other._m2._value); boost::swap(_m3._value, other._m3._value); boost::swap(_m4._value, other._m4._value); boost::swap(_m5._value, other._m5._value); boost::swap(_m6._value, other._m6._value);;
        }
    public: 
        detail::tuple_member<T0> _m0; detail::tuple_member<T1> _m1; detail::tuple_member<T2> _m2; detail::tuple_member<T3> _m3; detail::tuple_member<T4> _m4; detail::tuple_member<T5> _m5; detail::tuple_member<T6> _m6;;
    };
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type , typename detail::make_tuple_element<T6>::type>
    make_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5 , BOOST_FWD_REF(T6) v6)
    {
        return
            tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type , typename detail::make_tuple_element<T6>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5) , boost::forward<T6>(v6)
            );
    }
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6>
    BOOST_FORCEINLINE
    tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type , typename add_rvalue_reference<T6>::type>
    forward_as_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5 , BOOST_FWD_REF(T6) v6) BOOST_NOEXCEPT
    {
        return
            tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type , typename add_rvalue_reference<T6>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5) , boost::forward<T6>(v6)
            );
    }
    
    
    
    
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6>
    BOOST_FORCEINLINE
    tuple<T0& , T1& , T2& , T3& , T4& , T5& , T6&>
    tie(T0& v0 , T1& v1 , T2& v2 , T3& v3 , T4& v4 , T5& v5 , T6& v6) BOOST_NOEXCEPT
    {
        return
            tuple<T0& , T1& , T2& , T3& , T4& , T5& , T6&>(
                v0 , v1 , v2 , v3 , v4 , v5 , v6
            );
    }
    
    
    
    
    
    template <typename TTuple, typename UTuple>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename boost::lazy_enable_if_c<
        tuple_size<typename remove_reference<TTuple>::type>::value
      + tuple_size<typename remove_reference<UTuple>::type>::value == 7
      , detail::tuple_cat_result<TTuple, UTuple>
    >::type
    tuple_cat(BOOST_FWD_REF(TTuple) t, BOOST_FWD_REF(UTuple) u)
    {
        return
            typename detail::tuple_cat_result<TTuple, UTuple>::type(
                detail::tuple_cat_element< 0, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 1, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 2, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 3, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 4, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 5, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 6, T0, T1>::call(t0, t1)
            );
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename detail::tuple_cat_result<
        T0 , T1 , T2 , T3 , T4 , T5 , T6
    >::type
    tuple_cat(BOOST_FWD_REF(T0) t0 , BOOST_FWD_REF(T1) t1 , BOOST_FWD_REF(T2) t2 , BOOST_FWD_REF(T3) t3 , BOOST_FWD_REF(T4) t4 , BOOST_FWD_REF(T5) t5 , BOOST_FWD_REF(T6) t6)
    {
        return
            util::tuple_cat(
                util::tuple_cat( boost::forward<T0> (t0) , boost::forward<T1> (t1)) , util::tuple_cat( boost::forward<T2> (t2) , boost::forward<T3> (t3)) , util::tuple_cat( boost::forward<T4> (t4) , boost::forward<T5> (t5))
              , boost::forward<T6>
                    (t6)
            );
    }
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6>
    struct tuple_size<tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6> >
      : boost::mpl::size_t<7>
    {};
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    struct tuple_element<6, tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19> >
      : boost::mpl::identity<T6>
    {
        template <typename Tuple>
        static BOOST_CONSTEXPR BOOST_FORCEINLINE
        typename detail::qualify_as<T6, Tuple&>::type
        get(Tuple& tuple) BOOST_NOEXCEPT
        {
            return tuple._m6._value;
        }
    };
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7, typename UTuple>
        struct are_tuples_compatible<
            tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7>, UTuple
          , typename boost::enable_if_c<
                tuple_size<typename remove_reference<UTuple>::type>::value == 8
            >::type
        >
        {
            typedef char(&no_type)[1];
            typedef char(&yes_type)[2];
            static no_type call(...);
            static yes_type call(T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7);
            static bool const value =
                sizeof(
                    call(util::get< 0>( boost::declval<UTuple>()) , util::get< 1>( boost::declval<UTuple>()) , util::get< 2>( boost::declval<UTuple>()) , util::get< 3>( boost::declval<UTuple>()) , util::get< 4>( boost::declval<UTuple>()) , util::get< 5>( boost::declval<UTuple>()) , util::get< 6>( boost::declval<UTuple>()) , util::get< 7>( boost::declval<UTuple>()))
                ) == sizeof(yes_type);
            typedef boost::mpl::bool_<value> type;
        };
    }
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7>
    class tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7>
    {
    public:
        
        
        
        
        BOOST_CONSTEXPR tuple()
          : _m0() , _m1() , _m2() , _m3() , _m4() , _m5() , _m6() , _m7()
        {}
        
        
        
        BOOST_CONSTEXPR explicit tuple(
            typename add_lvalue_reference<typename boost::add_const<T0>::type>::type v0 , typename add_lvalue_reference<typename boost::add_const<T1>::type>::type v1 , typename add_lvalue_reference<typename boost::add_const<T2>::type>::type v2 , typename add_lvalue_reference<typename boost::add_const<T3>::type>::type v3 , typename add_lvalue_reference<typename boost::add_const<T4>::type>::type v4 , typename add_lvalue_reference<typename boost::add_const<T5>::type>::type v5 , typename add_lvalue_reference<typename boost::add_const<T6>::type>::type v6 , typename add_lvalue_reference<typename boost::add_const<T7>::type>::type v7
        ) : _m0(v0) , _m1(v1) , _m2(v2) , _m3(v3) , _m4(v4) , _m5(v5) , _m6(v6) , _m7(v7)
        {}
        
        
        
        
        
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7>
        BOOST_CONSTEXPR explicit tuple(
            BOOST_FWD_REF(U0) u0 , BOOST_FWD_REF(U1) u1 , BOOST_FWD_REF(U2) u2 , BOOST_FWD_REF(U3) u3 , BOOST_FWD_REF(U4) u4 , BOOST_FWD_REF(U5) u5 , BOOST_FWD_REF(U6) u6 , BOOST_FWD_REF(U7) u7
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<tuple<U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7> >::type
                >::value
            >::type* = 0
        ) : _m0(boost::forward<U0>(u0)) , _m1(boost::forward<U1>(u1)) , _m2(boost::forward<U2>(u2)) , _m3(boost::forward<U3>(u3)) , _m4(boost::forward<U4>(u4)) , _m5(boost::forward<U5>(u5)) , _m6(boost::forward<U6>(u6)) , _m7(boost::forward<U7>(u7))
        {}
        
        
        
        BOOST_CONSTEXPR tuple(tuple const& other)
          : _m0(other._m0) , _m1(other._m1) , _m2(other._m2) , _m3(other._m3) , _m4(other._m4) , _m5(other._m5) , _m6(other._m6) , _m7(other._m7)
        {}
        
        
        
        BOOST_CONSTEXPR tuple(BOOST_RV_REF(tuple) other)
          : _m0(boost::move(other._m0)) , _m1(boost::move(other._m1)) , _m2(boost::move(other._m2)) , _m3(boost::move(other._m3)) , _m4(boost::move(other._m4)) , _m5(boost::move(other._m5)) , _m6(boost::move(other._m6)) , _m7(boost::move(other._m7))
        {}
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        BOOST_CONSTEXPR tuple(
            BOOST_FWD_REF(UTuple) other
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<UTuple>::type
                >::value
            >::type* = 0
        ) : _m0(util::get< 0>(boost::forward<UTuple>(other))) , _m1(util::get< 1>(boost::forward<UTuple>(other))) , _m2(util::get< 2>(boost::forward<UTuple>(other))) , _m3(util::get< 3>(boost::forward<UTuple>(other))) , _m4(util::get< 4>(boost::forward<UTuple>(other))) , _m5(util::get< 5>(boost::forward<UTuple>(other))) , _m6(util::get< 6>(boost::forward<UTuple>(other))) , _m7(util::get< 7>(boost::forward<UTuple>(other)))
        {}
        
        
        
        
        
        tuple& operator=(tuple const& other)
        {
            _m0 = other._m0; _m1 = other._m1; _m2 = other._m2; _m3 = other._m3; _m4 = other._m4; _m5 = other._m5; _m6 = other._m6; _m7 = other._m7;;
            return *this;
        }
        
        
        
        
        
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            _m0 = boost::move(other._m0); _m1 = boost::move(other._m1); _m2 = boost::move(other._m2); _m3 = boost::move(other._m3); _m4 = boost::move(other._m4); _m5 = boost::move(other._m5); _m6 = boost::move(other._m6); _m7 = boost::move(other._m7);;
            return *this;
        }
        
        
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        typename boost::enable_if_c<
            tuple_size<typename remove_reference<UTuple>::type>::value == 8
          , tuple&
        >::type
        operator=(BOOST_FWD_REF(UTuple) other)
        {
            _m0 = util::get< 0>(boost::forward<UTuple>(other)); _m1 = util::get< 1>(boost::forward<UTuple>(other)); _m2 = util::get< 2>(boost::forward<UTuple>(other)); _m3 = util::get< 3>(boost::forward<UTuple>(other)); _m4 = util::get< 4>(boost::forward<UTuple>(other)); _m5 = util::get< 5>(boost::forward<UTuple>(other)); _m6 = util::get< 6>(boost::forward<UTuple>(other)); _m7 = util::get< 7>(boost::forward<UTuple>(other));;
            return *this;
        }
        
        
        
        
        
        
        void swap(tuple& other)
            BOOST_NOEXCEPT_IF(true && BOOST_NOEXCEPT_EXPR((boost::swap(_m0._value, other._m0._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m1._value, other._m1._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m2._value, other._m2._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m3._value, other._m3._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m4._value, other._m4._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m5._value, other._m5._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m6._value, other._m6._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m7._value, other._m7._value))))
        {
            boost::swap(_m0._value, other._m0._value); boost::swap(_m1._value, other._m1._value); boost::swap(_m2._value, other._m2._value); boost::swap(_m3._value, other._m3._value); boost::swap(_m4._value, other._m4._value); boost::swap(_m5._value, other._m5._value); boost::swap(_m6._value, other._m6._value); boost::swap(_m7._value, other._m7._value);;
        }
    public: 
        detail::tuple_member<T0> _m0; detail::tuple_member<T1> _m1; detail::tuple_member<T2> _m2; detail::tuple_member<T3> _m3; detail::tuple_member<T4> _m4; detail::tuple_member<T5> _m5; detail::tuple_member<T6> _m6; detail::tuple_member<T7> _m7;;
    };
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type , typename detail::make_tuple_element<T6>::type , typename detail::make_tuple_element<T7>::type>
    make_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5 , BOOST_FWD_REF(T6) v6 , BOOST_FWD_REF(T7) v7)
    {
        return
            tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type , typename detail::make_tuple_element<T6>::type , typename detail::make_tuple_element<T7>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5) , boost::forward<T6>(v6) , boost::forward<T7>(v7)
            );
    }
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7>
    BOOST_FORCEINLINE
    tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type , typename add_rvalue_reference<T6>::type , typename add_rvalue_reference<T7>::type>
    forward_as_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5 , BOOST_FWD_REF(T6) v6 , BOOST_FWD_REF(T7) v7) BOOST_NOEXCEPT
    {
        return
            tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type , typename add_rvalue_reference<T6>::type , typename add_rvalue_reference<T7>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5) , boost::forward<T6>(v6) , boost::forward<T7>(v7)
            );
    }
    
    
    
    
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7>
    BOOST_FORCEINLINE
    tuple<T0& , T1& , T2& , T3& , T4& , T5& , T6& , T7&>
    tie(T0& v0 , T1& v1 , T2& v2 , T3& v3 , T4& v4 , T5& v5 , T6& v6 , T7& v7) BOOST_NOEXCEPT
    {
        return
            tuple<T0& , T1& , T2& , T3& , T4& , T5& , T6& , T7&>(
                v0 , v1 , v2 , v3 , v4 , v5 , v6 , v7
            );
    }
    
    
    
    
    
    template <typename TTuple, typename UTuple>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename boost::lazy_enable_if_c<
        tuple_size<typename remove_reference<TTuple>::type>::value
      + tuple_size<typename remove_reference<UTuple>::type>::value == 8
      , detail::tuple_cat_result<TTuple, UTuple>
    >::type
    tuple_cat(BOOST_FWD_REF(TTuple) t, BOOST_FWD_REF(UTuple) u)
    {
        return
            typename detail::tuple_cat_result<TTuple, UTuple>::type(
                detail::tuple_cat_element< 0, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 1, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 2, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 3, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 4, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 5, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 6, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 7, T0, T1>::call(t0, t1)
            );
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename detail::tuple_cat_result<
        T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7
    >::type
    tuple_cat(BOOST_FWD_REF(T0) t0 , BOOST_FWD_REF(T1) t1 , BOOST_FWD_REF(T2) t2 , BOOST_FWD_REF(T3) t3 , BOOST_FWD_REF(T4) t4 , BOOST_FWD_REF(T5) t5 , BOOST_FWD_REF(T6) t6 , BOOST_FWD_REF(T7) t7)
    {
        return
            util::tuple_cat(
                util::tuple_cat( boost::forward<T0> (t0) , boost::forward<T1> (t1)) , util::tuple_cat( boost::forward<T2> (t2) , boost::forward<T3> (t3)) , util::tuple_cat( boost::forward<T4> (t4) , boost::forward<T5> (t5)) , util::tuple_cat( boost::forward<T6> (t6) , boost::forward<T7> (t7))
            );
    }
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7>
    struct tuple_size<tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7> >
      : boost::mpl::size_t<8>
    {};
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    struct tuple_element<7, tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19> >
      : boost::mpl::identity<T7>
    {
        template <typename Tuple>
        static BOOST_CONSTEXPR BOOST_FORCEINLINE
        typename detail::qualify_as<T7, Tuple&>::type
        get(Tuple& tuple) BOOST_NOEXCEPT
        {
            return tuple._m7._value;
        }
    };
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8, typename UTuple>
        struct are_tuples_compatible<
            tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8>, UTuple
          , typename boost::enable_if_c<
                tuple_size<typename remove_reference<UTuple>::type>::value == 9
            >::type
        >
        {
            typedef char(&no_type)[1];
            typedef char(&yes_type)[2];
            static no_type call(...);
            static yes_type call(T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8);
            static bool const value =
                sizeof(
                    call(util::get< 0>( boost::declval<UTuple>()) , util::get< 1>( boost::declval<UTuple>()) , util::get< 2>( boost::declval<UTuple>()) , util::get< 3>( boost::declval<UTuple>()) , util::get< 4>( boost::declval<UTuple>()) , util::get< 5>( boost::declval<UTuple>()) , util::get< 6>( boost::declval<UTuple>()) , util::get< 7>( boost::declval<UTuple>()) , util::get< 8>( boost::declval<UTuple>()))
                ) == sizeof(yes_type);
            typedef boost::mpl::bool_<value> type;
        };
    }
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8>
    class tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8>
    {
    public:
        
        
        
        
        BOOST_CONSTEXPR tuple()
          : _m0() , _m1() , _m2() , _m3() , _m4() , _m5() , _m6() , _m7() , _m8()
        {}
        
        
        
        BOOST_CONSTEXPR explicit tuple(
            typename add_lvalue_reference<typename boost::add_const<T0>::type>::type v0 , typename add_lvalue_reference<typename boost::add_const<T1>::type>::type v1 , typename add_lvalue_reference<typename boost::add_const<T2>::type>::type v2 , typename add_lvalue_reference<typename boost::add_const<T3>::type>::type v3 , typename add_lvalue_reference<typename boost::add_const<T4>::type>::type v4 , typename add_lvalue_reference<typename boost::add_const<T5>::type>::type v5 , typename add_lvalue_reference<typename boost::add_const<T6>::type>::type v6 , typename add_lvalue_reference<typename boost::add_const<T7>::type>::type v7 , typename add_lvalue_reference<typename boost::add_const<T8>::type>::type v8
        ) : _m0(v0) , _m1(v1) , _m2(v2) , _m3(v3) , _m4(v4) , _m5(v5) , _m6(v6) , _m7(v7) , _m8(v8)
        {}
        
        
        
        
        
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8>
        BOOST_CONSTEXPR explicit tuple(
            BOOST_FWD_REF(U0) u0 , BOOST_FWD_REF(U1) u1 , BOOST_FWD_REF(U2) u2 , BOOST_FWD_REF(U3) u3 , BOOST_FWD_REF(U4) u4 , BOOST_FWD_REF(U5) u5 , BOOST_FWD_REF(U6) u6 , BOOST_FWD_REF(U7) u7 , BOOST_FWD_REF(U8) u8
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<tuple<U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8> >::type
                >::value
            >::type* = 0
        ) : _m0(boost::forward<U0>(u0)) , _m1(boost::forward<U1>(u1)) , _m2(boost::forward<U2>(u2)) , _m3(boost::forward<U3>(u3)) , _m4(boost::forward<U4>(u4)) , _m5(boost::forward<U5>(u5)) , _m6(boost::forward<U6>(u6)) , _m7(boost::forward<U7>(u7)) , _m8(boost::forward<U8>(u8))
        {}
        
        
        
        BOOST_CONSTEXPR tuple(tuple const& other)
          : _m0(other._m0) , _m1(other._m1) , _m2(other._m2) , _m3(other._m3) , _m4(other._m4) , _m5(other._m5) , _m6(other._m6) , _m7(other._m7) , _m8(other._m8)
        {}
        
        
        
        BOOST_CONSTEXPR tuple(BOOST_RV_REF(tuple) other)
          : _m0(boost::move(other._m0)) , _m1(boost::move(other._m1)) , _m2(boost::move(other._m2)) , _m3(boost::move(other._m3)) , _m4(boost::move(other._m4)) , _m5(boost::move(other._m5)) , _m6(boost::move(other._m6)) , _m7(boost::move(other._m7)) , _m8(boost::move(other._m8))
        {}
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        BOOST_CONSTEXPR tuple(
            BOOST_FWD_REF(UTuple) other
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<UTuple>::type
                >::value
            >::type* = 0
        ) : _m0(util::get< 0>(boost::forward<UTuple>(other))) , _m1(util::get< 1>(boost::forward<UTuple>(other))) , _m2(util::get< 2>(boost::forward<UTuple>(other))) , _m3(util::get< 3>(boost::forward<UTuple>(other))) , _m4(util::get< 4>(boost::forward<UTuple>(other))) , _m5(util::get< 5>(boost::forward<UTuple>(other))) , _m6(util::get< 6>(boost::forward<UTuple>(other))) , _m7(util::get< 7>(boost::forward<UTuple>(other))) , _m8(util::get< 8>(boost::forward<UTuple>(other)))
        {}
        
        
        
        
        
        tuple& operator=(tuple const& other)
        {
            _m0 = other._m0; _m1 = other._m1; _m2 = other._m2; _m3 = other._m3; _m4 = other._m4; _m5 = other._m5; _m6 = other._m6; _m7 = other._m7; _m8 = other._m8;;
            return *this;
        }
        
        
        
        
        
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            _m0 = boost::move(other._m0); _m1 = boost::move(other._m1); _m2 = boost::move(other._m2); _m3 = boost::move(other._m3); _m4 = boost::move(other._m4); _m5 = boost::move(other._m5); _m6 = boost::move(other._m6); _m7 = boost::move(other._m7); _m8 = boost::move(other._m8);;
            return *this;
        }
        
        
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        typename boost::enable_if_c<
            tuple_size<typename remove_reference<UTuple>::type>::value == 9
          , tuple&
        >::type
        operator=(BOOST_FWD_REF(UTuple) other)
        {
            _m0 = util::get< 0>(boost::forward<UTuple>(other)); _m1 = util::get< 1>(boost::forward<UTuple>(other)); _m2 = util::get< 2>(boost::forward<UTuple>(other)); _m3 = util::get< 3>(boost::forward<UTuple>(other)); _m4 = util::get< 4>(boost::forward<UTuple>(other)); _m5 = util::get< 5>(boost::forward<UTuple>(other)); _m6 = util::get< 6>(boost::forward<UTuple>(other)); _m7 = util::get< 7>(boost::forward<UTuple>(other)); _m8 = util::get< 8>(boost::forward<UTuple>(other));;
            return *this;
        }
        
        
        
        
        
        
        void swap(tuple& other)
            BOOST_NOEXCEPT_IF(true && BOOST_NOEXCEPT_EXPR((boost::swap(_m0._value, other._m0._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m1._value, other._m1._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m2._value, other._m2._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m3._value, other._m3._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m4._value, other._m4._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m5._value, other._m5._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m6._value, other._m6._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m7._value, other._m7._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m8._value, other._m8._value))))
        {
            boost::swap(_m0._value, other._m0._value); boost::swap(_m1._value, other._m1._value); boost::swap(_m2._value, other._m2._value); boost::swap(_m3._value, other._m3._value); boost::swap(_m4._value, other._m4._value); boost::swap(_m5._value, other._m5._value); boost::swap(_m6._value, other._m6._value); boost::swap(_m7._value, other._m7._value); boost::swap(_m8._value, other._m8._value);;
        }
    public: 
        detail::tuple_member<T0> _m0; detail::tuple_member<T1> _m1; detail::tuple_member<T2> _m2; detail::tuple_member<T3> _m3; detail::tuple_member<T4> _m4; detail::tuple_member<T5> _m5; detail::tuple_member<T6> _m6; detail::tuple_member<T7> _m7; detail::tuple_member<T8> _m8;;
    };
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type , typename detail::make_tuple_element<T6>::type , typename detail::make_tuple_element<T7>::type , typename detail::make_tuple_element<T8>::type>
    make_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5 , BOOST_FWD_REF(T6) v6 , BOOST_FWD_REF(T7) v7 , BOOST_FWD_REF(T8) v8)
    {
        return
            tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type , typename detail::make_tuple_element<T6>::type , typename detail::make_tuple_element<T7>::type , typename detail::make_tuple_element<T8>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5) , boost::forward<T6>(v6) , boost::forward<T7>(v7) , boost::forward<T8>(v8)
            );
    }
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8>
    BOOST_FORCEINLINE
    tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type , typename add_rvalue_reference<T6>::type , typename add_rvalue_reference<T7>::type , typename add_rvalue_reference<T8>::type>
    forward_as_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5 , BOOST_FWD_REF(T6) v6 , BOOST_FWD_REF(T7) v7 , BOOST_FWD_REF(T8) v8) BOOST_NOEXCEPT
    {
        return
            tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type , typename add_rvalue_reference<T6>::type , typename add_rvalue_reference<T7>::type , typename add_rvalue_reference<T8>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5) , boost::forward<T6>(v6) , boost::forward<T7>(v7) , boost::forward<T8>(v8)
            );
    }
    
    
    
    
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8>
    BOOST_FORCEINLINE
    tuple<T0& , T1& , T2& , T3& , T4& , T5& , T6& , T7& , T8&>
    tie(T0& v0 , T1& v1 , T2& v2 , T3& v3 , T4& v4 , T5& v5 , T6& v6 , T7& v7 , T8& v8) BOOST_NOEXCEPT
    {
        return
            tuple<T0& , T1& , T2& , T3& , T4& , T5& , T6& , T7& , T8&>(
                v0 , v1 , v2 , v3 , v4 , v5 , v6 , v7 , v8
            );
    }
    
    
    
    
    
    template <typename TTuple, typename UTuple>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename boost::lazy_enable_if_c<
        tuple_size<typename remove_reference<TTuple>::type>::value
      + tuple_size<typename remove_reference<UTuple>::type>::value == 9
      , detail::tuple_cat_result<TTuple, UTuple>
    >::type
    tuple_cat(BOOST_FWD_REF(TTuple) t, BOOST_FWD_REF(UTuple) u)
    {
        return
            typename detail::tuple_cat_result<TTuple, UTuple>::type(
                detail::tuple_cat_element< 0, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 1, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 2, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 3, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 4, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 5, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 6, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 7, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 8, T0, T1>::call(t0, t1)
            );
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename detail::tuple_cat_result<
        T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8
    >::type
    tuple_cat(BOOST_FWD_REF(T0) t0 , BOOST_FWD_REF(T1) t1 , BOOST_FWD_REF(T2) t2 , BOOST_FWD_REF(T3) t3 , BOOST_FWD_REF(T4) t4 , BOOST_FWD_REF(T5) t5 , BOOST_FWD_REF(T6) t6 , BOOST_FWD_REF(T7) t7 , BOOST_FWD_REF(T8) t8)
    {
        return
            util::tuple_cat(
                util::tuple_cat( boost::forward<T0> (t0) , boost::forward<T1> (t1)) , util::tuple_cat( boost::forward<T2> (t2) , boost::forward<T3> (t3)) , util::tuple_cat( boost::forward<T4> (t4) , boost::forward<T5> (t5)) , util::tuple_cat( boost::forward<T6> (t6) , boost::forward<T7> (t7))
              , boost::forward<T8>
                    (t8)
            );
    }
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8>
    struct tuple_size<tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8> >
      : boost::mpl::size_t<9>
    {};
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    struct tuple_element<8, tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19> >
      : boost::mpl::identity<T8>
    {
        template <typename Tuple>
        static BOOST_CONSTEXPR BOOST_FORCEINLINE
        typename detail::qualify_as<T8, Tuple&>::type
        get(Tuple& tuple) BOOST_NOEXCEPT
        {
            return tuple._m8._value;
        }
    };
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9, typename UTuple>
        struct are_tuples_compatible<
            tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9>, UTuple
          , typename boost::enable_if_c<
                tuple_size<typename remove_reference<UTuple>::type>::value == 10
            >::type
        >
        {
            typedef char(&no_type)[1];
            typedef char(&yes_type)[2];
            static no_type call(...);
            static yes_type call(T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9);
            static bool const value =
                sizeof(
                    call(util::get< 0>( boost::declval<UTuple>()) , util::get< 1>( boost::declval<UTuple>()) , util::get< 2>( boost::declval<UTuple>()) , util::get< 3>( boost::declval<UTuple>()) , util::get< 4>( boost::declval<UTuple>()) , util::get< 5>( boost::declval<UTuple>()) , util::get< 6>( boost::declval<UTuple>()) , util::get< 7>( boost::declval<UTuple>()) , util::get< 8>( boost::declval<UTuple>()) , util::get< 9>( boost::declval<UTuple>()))
                ) == sizeof(yes_type);
            typedef boost::mpl::bool_<value> type;
        };
    }
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9>
    class tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9>
    {
    public:
        
        
        
        
        BOOST_CONSTEXPR tuple()
          : _m0() , _m1() , _m2() , _m3() , _m4() , _m5() , _m6() , _m7() , _m8() , _m9()
        {}
        
        
        
        BOOST_CONSTEXPR explicit tuple(
            typename add_lvalue_reference<typename boost::add_const<T0>::type>::type v0 , typename add_lvalue_reference<typename boost::add_const<T1>::type>::type v1 , typename add_lvalue_reference<typename boost::add_const<T2>::type>::type v2 , typename add_lvalue_reference<typename boost::add_const<T3>::type>::type v3 , typename add_lvalue_reference<typename boost::add_const<T4>::type>::type v4 , typename add_lvalue_reference<typename boost::add_const<T5>::type>::type v5 , typename add_lvalue_reference<typename boost::add_const<T6>::type>::type v6 , typename add_lvalue_reference<typename boost::add_const<T7>::type>::type v7 , typename add_lvalue_reference<typename boost::add_const<T8>::type>::type v8 , typename add_lvalue_reference<typename boost::add_const<T9>::type>::type v9
        ) : _m0(v0) , _m1(v1) , _m2(v2) , _m3(v3) , _m4(v4) , _m5(v5) , _m6(v6) , _m7(v7) , _m8(v8) , _m9(v9)
        {}
        
        
        
        
        
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9>
        BOOST_CONSTEXPR explicit tuple(
            BOOST_FWD_REF(U0) u0 , BOOST_FWD_REF(U1) u1 , BOOST_FWD_REF(U2) u2 , BOOST_FWD_REF(U3) u3 , BOOST_FWD_REF(U4) u4 , BOOST_FWD_REF(U5) u5 , BOOST_FWD_REF(U6) u6 , BOOST_FWD_REF(U7) u7 , BOOST_FWD_REF(U8) u8 , BOOST_FWD_REF(U9) u9
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<tuple<U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9> >::type
                >::value
            >::type* = 0
        ) : _m0(boost::forward<U0>(u0)) , _m1(boost::forward<U1>(u1)) , _m2(boost::forward<U2>(u2)) , _m3(boost::forward<U3>(u3)) , _m4(boost::forward<U4>(u4)) , _m5(boost::forward<U5>(u5)) , _m6(boost::forward<U6>(u6)) , _m7(boost::forward<U7>(u7)) , _m8(boost::forward<U8>(u8)) , _m9(boost::forward<U9>(u9))
        {}
        
        
        
        BOOST_CONSTEXPR tuple(tuple const& other)
          : _m0(other._m0) , _m1(other._m1) , _m2(other._m2) , _m3(other._m3) , _m4(other._m4) , _m5(other._m5) , _m6(other._m6) , _m7(other._m7) , _m8(other._m8) , _m9(other._m9)
        {}
        
        
        
        BOOST_CONSTEXPR tuple(BOOST_RV_REF(tuple) other)
          : _m0(boost::move(other._m0)) , _m1(boost::move(other._m1)) , _m2(boost::move(other._m2)) , _m3(boost::move(other._m3)) , _m4(boost::move(other._m4)) , _m5(boost::move(other._m5)) , _m6(boost::move(other._m6)) , _m7(boost::move(other._m7)) , _m8(boost::move(other._m8)) , _m9(boost::move(other._m9))
        {}
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        BOOST_CONSTEXPR tuple(
            BOOST_FWD_REF(UTuple) other
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<UTuple>::type
                >::value
            >::type* = 0
        ) : _m0(util::get< 0>(boost::forward<UTuple>(other))) , _m1(util::get< 1>(boost::forward<UTuple>(other))) , _m2(util::get< 2>(boost::forward<UTuple>(other))) , _m3(util::get< 3>(boost::forward<UTuple>(other))) , _m4(util::get< 4>(boost::forward<UTuple>(other))) , _m5(util::get< 5>(boost::forward<UTuple>(other))) , _m6(util::get< 6>(boost::forward<UTuple>(other))) , _m7(util::get< 7>(boost::forward<UTuple>(other))) , _m8(util::get< 8>(boost::forward<UTuple>(other))) , _m9(util::get< 9>(boost::forward<UTuple>(other)))
        {}
        
        
        
        
        
        tuple& operator=(tuple const& other)
        {
            _m0 = other._m0; _m1 = other._m1; _m2 = other._m2; _m3 = other._m3; _m4 = other._m4; _m5 = other._m5; _m6 = other._m6; _m7 = other._m7; _m8 = other._m8; _m9 = other._m9;;
            return *this;
        }
        
        
        
        
        
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            _m0 = boost::move(other._m0); _m1 = boost::move(other._m1); _m2 = boost::move(other._m2); _m3 = boost::move(other._m3); _m4 = boost::move(other._m4); _m5 = boost::move(other._m5); _m6 = boost::move(other._m6); _m7 = boost::move(other._m7); _m8 = boost::move(other._m8); _m9 = boost::move(other._m9);;
            return *this;
        }
        
        
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        typename boost::enable_if_c<
            tuple_size<typename remove_reference<UTuple>::type>::value == 10
          , tuple&
        >::type
        operator=(BOOST_FWD_REF(UTuple) other)
        {
            _m0 = util::get< 0>(boost::forward<UTuple>(other)); _m1 = util::get< 1>(boost::forward<UTuple>(other)); _m2 = util::get< 2>(boost::forward<UTuple>(other)); _m3 = util::get< 3>(boost::forward<UTuple>(other)); _m4 = util::get< 4>(boost::forward<UTuple>(other)); _m5 = util::get< 5>(boost::forward<UTuple>(other)); _m6 = util::get< 6>(boost::forward<UTuple>(other)); _m7 = util::get< 7>(boost::forward<UTuple>(other)); _m8 = util::get< 8>(boost::forward<UTuple>(other)); _m9 = util::get< 9>(boost::forward<UTuple>(other));;
            return *this;
        }
        
        
        
        
        
        
        void swap(tuple& other)
            BOOST_NOEXCEPT_IF(true && BOOST_NOEXCEPT_EXPR((boost::swap(_m0._value, other._m0._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m1._value, other._m1._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m2._value, other._m2._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m3._value, other._m3._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m4._value, other._m4._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m5._value, other._m5._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m6._value, other._m6._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m7._value, other._m7._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m8._value, other._m8._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m9._value, other._m9._value))))
        {
            boost::swap(_m0._value, other._m0._value); boost::swap(_m1._value, other._m1._value); boost::swap(_m2._value, other._m2._value); boost::swap(_m3._value, other._m3._value); boost::swap(_m4._value, other._m4._value); boost::swap(_m5._value, other._m5._value); boost::swap(_m6._value, other._m6._value); boost::swap(_m7._value, other._m7._value); boost::swap(_m8._value, other._m8._value); boost::swap(_m9._value, other._m9._value);;
        }
    public: 
        detail::tuple_member<T0> _m0; detail::tuple_member<T1> _m1; detail::tuple_member<T2> _m2; detail::tuple_member<T3> _m3; detail::tuple_member<T4> _m4; detail::tuple_member<T5> _m5; detail::tuple_member<T6> _m6; detail::tuple_member<T7> _m7; detail::tuple_member<T8> _m8; detail::tuple_member<T9> _m9;;
    };
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type , typename detail::make_tuple_element<T6>::type , typename detail::make_tuple_element<T7>::type , typename detail::make_tuple_element<T8>::type , typename detail::make_tuple_element<T9>::type>
    make_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5 , BOOST_FWD_REF(T6) v6 , BOOST_FWD_REF(T7) v7 , BOOST_FWD_REF(T8) v8 , BOOST_FWD_REF(T9) v9)
    {
        return
            tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type , typename detail::make_tuple_element<T6>::type , typename detail::make_tuple_element<T7>::type , typename detail::make_tuple_element<T8>::type , typename detail::make_tuple_element<T9>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5) , boost::forward<T6>(v6) , boost::forward<T7>(v7) , boost::forward<T8>(v8) , boost::forward<T9>(v9)
            );
    }
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9>
    BOOST_FORCEINLINE
    tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type , typename add_rvalue_reference<T6>::type , typename add_rvalue_reference<T7>::type , typename add_rvalue_reference<T8>::type , typename add_rvalue_reference<T9>::type>
    forward_as_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5 , BOOST_FWD_REF(T6) v6 , BOOST_FWD_REF(T7) v7 , BOOST_FWD_REF(T8) v8 , BOOST_FWD_REF(T9) v9) BOOST_NOEXCEPT
    {
        return
            tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type , typename add_rvalue_reference<T6>::type , typename add_rvalue_reference<T7>::type , typename add_rvalue_reference<T8>::type , typename add_rvalue_reference<T9>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5) , boost::forward<T6>(v6) , boost::forward<T7>(v7) , boost::forward<T8>(v8) , boost::forward<T9>(v9)
            );
    }
    
    
    
    
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9>
    BOOST_FORCEINLINE
    tuple<T0& , T1& , T2& , T3& , T4& , T5& , T6& , T7& , T8& , T9&>
    tie(T0& v0 , T1& v1 , T2& v2 , T3& v3 , T4& v4 , T5& v5 , T6& v6 , T7& v7 , T8& v8 , T9& v9) BOOST_NOEXCEPT
    {
        return
            tuple<T0& , T1& , T2& , T3& , T4& , T5& , T6& , T7& , T8& , T9&>(
                v0 , v1 , v2 , v3 , v4 , v5 , v6 , v7 , v8 , v9
            );
    }
    
    
    
    
    
    template <typename TTuple, typename UTuple>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename boost::lazy_enable_if_c<
        tuple_size<typename remove_reference<TTuple>::type>::value
      + tuple_size<typename remove_reference<UTuple>::type>::value == 10
      , detail::tuple_cat_result<TTuple, UTuple>
    >::type
    tuple_cat(BOOST_FWD_REF(TTuple) t, BOOST_FWD_REF(UTuple) u)
    {
        return
            typename detail::tuple_cat_result<TTuple, UTuple>::type(
                detail::tuple_cat_element< 0, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 1, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 2, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 3, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 4, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 5, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 6, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 7, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 8, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 9, T0, T1>::call(t0, t1)
            );
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename detail::tuple_cat_result<
        T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9
    >::type
    tuple_cat(BOOST_FWD_REF(T0) t0 , BOOST_FWD_REF(T1) t1 , BOOST_FWD_REF(T2) t2 , BOOST_FWD_REF(T3) t3 , BOOST_FWD_REF(T4) t4 , BOOST_FWD_REF(T5) t5 , BOOST_FWD_REF(T6) t6 , BOOST_FWD_REF(T7) t7 , BOOST_FWD_REF(T8) t8 , BOOST_FWD_REF(T9) t9)
    {
        return
            util::tuple_cat(
                util::tuple_cat( boost::forward<T0> (t0) , boost::forward<T1> (t1)) , util::tuple_cat( boost::forward<T2> (t2) , boost::forward<T3> (t3)) , util::tuple_cat( boost::forward<T4> (t4) , boost::forward<T5> (t5)) , util::tuple_cat( boost::forward<T6> (t6) , boost::forward<T7> (t7)) , util::tuple_cat( boost::forward<T8> (t8) , boost::forward<T9> (t9))
            );
    }
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9>
    struct tuple_size<tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9> >
      : boost::mpl::size_t<10>
    {};
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    struct tuple_element<9, tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19> >
      : boost::mpl::identity<T9>
    {
        template <typename Tuple>
        static BOOST_CONSTEXPR BOOST_FORCEINLINE
        typename detail::qualify_as<T9, Tuple&>::type
        get(Tuple& tuple) BOOST_NOEXCEPT
        {
            return tuple._m9._value;
        }
    };
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10, typename UTuple>
        struct are_tuples_compatible<
            tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10>, UTuple
          , typename boost::enable_if_c<
                tuple_size<typename remove_reference<UTuple>::type>::value == 11
            >::type
        >
        {
            typedef char(&no_type)[1];
            typedef char(&yes_type)[2];
            static no_type call(...);
            static yes_type call(T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10);
            static bool const value =
                sizeof(
                    call(util::get< 0>( boost::declval<UTuple>()) , util::get< 1>( boost::declval<UTuple>()) , util::get< 2>( boost::declval<UTuple>()) , util::get< 3>( boost::declval<UTuple>()) , util::get< 4>( boost::declval<UTuple>()) , util::get< 5>( boost::declval<UTuple>()) , util::get< 6>( boost::declval<UTuple>()) , util::get< 7>( boost::declval<UTuple>()) , util::get< 8>( boost::declval<UTuple>()) , util::get< 9>( boost::declval<UTuple>()) , util::get< 10>( boost::declval<UTuple>()))
                ) == sizeof(yes_type);
            typedef boost::mpl::bool_<value> type;
        };
    }
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10>
    class tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10>
    {
    public:
        
        
        
        
        BOOST_CONSTEXPR tuple()
          : _m0() , _m1() , _m2() , _m3() , _m4() , _m5() , _m6() , _m7() , _m8() , _m9() , _m10()
        {}
        
        
        
        BOOST_CONSTEXPR explicit tuple(
            typename add_lvalue_reference<typename boost::add_const<T0>::type>::type v0 , typename add_lvalue_reference<typename boost::add_const<T1>::type>::type v1 , typename add_lvalue_reference<typename boost::add_const<T2>::type>::type v2 , typename add_lvalue_reference<typename boost::add_const<T3>::type>::type v3 , typename add_lvalue_reference<typename boost::add_const<T4>::type>::type v4 , typename add_lvalue_reference<typename boost::add_const<T5>::type>::type v5 , typename add_lvalue_reference<typename boost::add_const<T6>::type>::type v6 , typename add_lvalue_reference<typename boost::add_const<T7>::type>::type v7 , typename add_lvalue_reference<typename boost::add_const<T8>::type>::type v8 , typename add_lvalue_reference<typename boost::add_const<T9>::type>::type v9 , typename add_lvalue_reference<typename boost::add_const<T10>::type>::type v10
        ) : _m0(v0) , _m1(v1) , _m2(v2) , _m3(v3) , _m4(v4) , _m5(v5) , _m6(v6) , _m7(v7) , _m8(v8) , _m9(v9) , _m10(v10)
        {}
        
        
        
        
        
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10>
        BOOST_CONSTEXPR explicit tuple(
            BOOST_FWD_REF(U0) u0 , BOOST_FWD_REF(U1) u1 , BOOST_FWD_REF(U2) u2 , BOOST_FWD_REF(U3) u3 , BOOST_FWD_REF(U4) u4 , BOOST_FWD_REF(U5) u5 , BOOST_FWD_REF(U6) u6 , BOOST_FWD_REF(U7) u7 , BOOST_FWD_REF(U8) u8 , BOOST_FWD_REF(U9) u9 , BOOST_FWD_REF(U10) u10
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<tuple<U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10> >::type
                >::value
            >::type* = 0
        ) : _m0(boost::forward<U0>(u0)) , _m1(boost::forward<U1>(u1)) , _m2(boost::forward<U2>(u2)) , _m3(boost::forward<U3>(u3)) , _m4(boost::forward<U4>(u4)) , _m5(boost::forward<U5>(u5)) , _m6(boost::forward<U6>(u6)) , _m7(boost::forward<U7>(u7)) , _m8(boost::forward<U8>(u8)) , _m9(boost::forward<U9>(u9)) , _m10(boost::forward<U10>(u10))
        {}
        
        
        
        BOOST_CONSTEXPR tuple(tuple const& other)
          : _m0(other._m0) , _m1(other._m1) , _m2(other._m2) , _m3(other._m3) , _m4(other._m4) , _m5(other._m5) , _m6(other._m6) , _m7(other._m7) , _m8(other._m8) , _m9(other._m9) , _m10(other._m10)
        {}
        
        
        
        BOOST_CONSTEXPR tuple(BOOST_RV_REF(tuple) other)
          : _m0(boost::move(other._m0)) , _m1(boost::move(other._m1)) , _m2(boost::move(other._m2)) , _m3(boost::move(other._m3)) , _m4(boost::move(other._m4)) , _m5(boost::move(other._m5)) , _m6(boost::move(other._m6)) , _m7(boost::move(other._m7)) , _m8(boost::move(other._m8)) , _m9(boost::move(other._m9)) , _m10(boost::move(other._m10))
        {}
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        BOOST_CONSTEXPR tuple(
            BOOST_FWD_REF(UTuple) other
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<UTuple>::type
                >::value
            >::type* = 0
        ) : _m0(util::get< 0>(boost::forward<UTuple>(other))) , _m1(util::get< 1>(boost::forward<UTuple>(other))) , _m2(util::get< 2>(boost::forward<UTuple>(other))) , _m3(util::get< 3>(boost::forward<UTuple>(other))) , _m4(util::get< 4>(boost::forward<UTuple>(other))) , _m5(util::get< 5>(boost::forward<UTuple>(other))) , _m6(util::get< 6>(boost::forward<UTuple>(other))) , _m7(util::get< 7>(boost::forward<UTuple>(other))) , _m8(util::get< 8>(boost::forward<UTuple>(other))) , _m9(util::get< 9>(boost::forward<UTuple>(other))) , _m10(util::get< 10>(boost::forward<UTuple>(other)))
        {}
        
        
        
        
        
        tuple& operator=(tuple const& other)
        {
            _m0 = other._m0; _m1 = other._m1; _m2 = other._m2; _m3 = other._m3; _m4 = other._m4; _m5 = other._m5; _m6 = other._m6; _m7 = other._m7; _m8 = other._m8; _m9 = other._m9; _m10 = other._m10;;
            return *this;
        }
        
        
        
        
        
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            _m0 = boost::move(other._m0); _m1 = boost::move(other._m1); _m2 = boost::move(other._m2); _m3 = boost::move(other._m3); _m4 = boost::move(other._m4); _m5 = boost::move(other._m5); _m6 = boost::move(other._m6); _m7 = boost::move(other._m7); _m8 = boost::move(other._m8); _m9 = boost::move(other._m9); _m10 = boost::move(other._m10);;
            return *this;
        }
        
        
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        typename boost::enable_if_c<
            tuple_size<typename remove_reference<UTuple>::type>::value == 11
          , tuple&
        >::type
        operator=(BOOST_FWD_REF(UTuple) other)
        {
            _m0 = util::get< 0>(boost::forward<UTuple>(other)); _m1 = util::get< 1>(boost::forward<UTuple>(other)); _m2 = util::get< 2>(boost::forward<UTuple>(other)); _m3 = util::get< 3>(boost::forward<UTuple>(other)); _m4 = util::get< 4>(boost::forward<UTuple>(other)); _m5 = util::get< 5>(boost::forward<UTuple>(other)); _m6 = util::get< 6>(boost::forward<UTuple>(other)); _m7 = util::get< 7>(boost::forward<UTuple>(other)); _m8 = util::get< 8>(boost::forward<UTuple>(other)); _m9 = util::get< 9>(boost::forward<UTuple>(other)); _m10 = util::get< 10>(boost::forward<UTuple>(other));;
            return *this;
        }
        
        
        
        
        
        
        void swap(tuple& other)
            BOOST_NOEXCEPT_IF(true && BOOST_NOEXCEPT_EXPR((boost::swap(_m0._value, other._m0._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m1._value, other._m1._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m2._value, other._m2._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m3._value, other._m3._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m4._value, other._m4._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m5._value, other._m5._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m6._value, other._m6._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m7._value, other._m7._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m8._value, other._m8._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m9._value, other._m9._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m10._value, other._m10._value))))
        {
            boost::swap(_m0._value, other._m0._value); boost::swap(_m1._value, other._m1._value); boost::swap(_m2._value, other._m2._value); boost::swap(_m3._value, other._m3._value); boost::swap(_m4._value, other._m4._value); boost::swap(_m5._value, other._m5._value); boost::swap(_m6._value, other._m6._value); boost::swap(_m7._value, other._m7._value); boost::swap(_m8._value, other._m8._value); boost::swap(_m9._value, other._m9._value); boost::swap(_m10._value, other._m10._value);;
        }
    public: 
        detail::tuple_member<T0> _m0; detail::tuple_member<T1> _m1; detail::tuple_member<T2> _m2; detail::tuple_member<T3> _m3; detail::tuple_member<T4> _m4; detail::tuple_member<T5> _m5; detail::tuple_member<T6> _m6; detail::tuple_member<T7> _m7; detail::tuple_member<T8> _m8; detail::tuple_member<T9> _m9; detail::tuple_member<T10> _m10;;
    };
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type , typename detail::make_tuple_element<T6>::type , typename detail::make_tuple_element<T7>::type , typename detail::make_tuple_element<T8>::type , typename detail::make_tuple_element<T9>::type , typename detail::make_tuple_element<T10>::type>
    make_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5 , BOOST_FWD_REF(T6) v6 , BOOST_FWD_REF(T7) v7 , BOOST_FWD_REF(T8) v8 , BOOST_FWD_REF(T9) v9 , BOOST_FWD_REF(T10) v10)
    {
        return
            tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type , typename detail::make_tuple_element<T6>::type , typename detail::make_tuple_element<T7>::type , typename detail::make_tuple_element<T8>::type , typename detail::make_tuple_element<T9>::type , typename detail::make_tuple_element<T10>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5) , boost::forward<T6>(v6) , boost::forward<T7>(v7) , boost::forward<T8>(v8) , boost::forward<T9>(v9) , boost::forward<T10>(v10)
            );
    }
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10>
    BOOST_FORCEINLINE
    tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type , typename add_rvalue_reference<T6>::type , typename add_rvalue_reference<T7>::type , typename add_rvalue_reference<T8>::type , typename add_rvalue_reference<T9>::type , typename add_rvalue_reference<T10>::type>
    forward_as_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5 , BOOST_FWD_REF(T6) v6 , BOOST_FWD_REF(T7) v7 , BOOST_FWD_REF(T8) v8 , BOOST_FWD_REF(T9) v9 , BOOST_FWD_REF(T10) v10) BOOST_NOEXCEPT
    {
        return
            tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type , typename add_rvalue_reference<T6>::type , typename add_rvalue_reference<T7>::type , typename add_rvalue_reference<T8>::type , typename add_rvalue_reference<T9>::type , typename add_rvalue_reference<T10>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5) , boost::forward<T6>(v6) , boost::forward<T7>(v7) , boost::forward<T8>(v8) , boost::forward<T9>(v9) , boost::forward<T10>(v10)
            );
    }
    
    
    
    
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10>
    BOOST_FORCEINLINE
    tuple<T0& , T1& , T2& , T3& , T4& , T5& , T6& , T7& , T8& , T9& , T10&>
    tie(T0& v0 , T1& v1 , T2& v2 , T3& v3 , T4& v4 , T5& v5 , T6& v6 , T7& v7 , T8& v8 , T9& v9 , T10& v10) BOOST_NOEXCEPT
    {
        return
            tuple<T0& , T1& , T2& , T3& , T4& , T5& , T6& , T7& , T8& , T9& , T10&>(
                v0 , v1 , v2 , v3 , v4 , v5 , v6 , v7 , v8 , v9 , v10
            );
    }
    
    
    
    
    
    template <typename TTuple, typename UTuple>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename boost::lazy_enable_if_c<
        tuple_size<typename remove_reference<TTuple>::type>::value
      + tuple_size<typename remove_reference<UTuple>::type>::value == 11
      , detail::tuple_cat_result<TTuple, UTuple>
    >::type
    tuple_cat(BOOST_FWD_REF(TTuple) t, BOOST_FWD_REF(UTuple) u)
    {
        return
            typename detail::tuple_cat_result<TTuple, UTuple>::type(
                detail::tuple_cat_element< 0, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 1, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 2, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 3, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 4, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 5, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 6, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 7, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 8, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 9, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 10, T0, T1>::call(t0, t1)
            );
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename detail::tuple_cat_result<
        T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10
    >::type
    tuple_cat(BOOST_FWD_REF(T0) t0 , BOOST_FWD_REF(T1) t1 , BOOST_FWD_REF(T2) t2 , BOOST_FWD_REF(T3) t3 , BOOST_FWD_REF(T4) t4 , BOOST_FWD_REF(T5) t5 , BOOST_FWD_REF(T6) t6 , BOOST_FWD_REF(T7) t7 , BOOST_FWD_REF(T8) t8 , BOOST_FWD_REF(T9) t9 , BOOST_FWD_REF(T10) t10)
    {
        return
            util::tuple_cat(
                util::tuple_cat( boost::forward<T0> (t0) , boost::forward<T1> (t1)) , util::tuple_cat( boost::forward<T2> (t2) , boost::forward<T3> (t3)) , util::tuple_cat( boost::forward<T4> (t4) , boost::forward<T5> (t5)) , util::tuple_cat( boost::forward<T6> (t6) , boost::forward<T7> (t7)) , util::tuple_cat( boost::forward<T8> (t8) , boost::forward<T9> (t9))
              , boost::forward<T10>
                    (t10)
            );
    }
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10>
    struct tuple_size<tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10> >
      : boost::mpl::size_t<11>
    {};
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    struct tuple_element<10, tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19> >
      : boost::mpl::identity<T10>
    {
        template <typename Tuple>
        static BOOST_CONSTEXPR BOOST_FORCEINLINE
        typename detail::qualify_as<T10, Tuple&>::type
        get(Tuple& tuple) BOOST_NOEXCEPT
        {
            return tuple._m10._value;
        }
    };
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11, typename UTuple>
        struct are_tuples_compatible<
            tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11>, UTuple
          , typename boost::enable_if_c<
                tuple_size<typename remove_reference<UTuple>::type>::value == 12
            >::type
        >
        {
            typedef char(&no_type)[1];
            typedef char(&yes_type)[2];
            static no_type call(...);
            static yes_type call(T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11);
            static bool const value =
                sizeof(
                    call(util::get< 0>( boost::declval<UTuple>()) , util::get< 1>( boost::declval<UTuple>()) , util::get< 2>( boost::declval<UTuple>()) , util::get< 3>( boost::declval<UTuple>()) , util::get< 4>( boost::declval<UTuple>()) , util::get< 5>( boost::declval<UTuple>()) , util::get< 6>( boost::declval<UTuple>()) , util::get< 7>( boost::declval<UTuple>()) , util::get< 8>( boost::declval<UTuple>()) , util::get< 9>( boost::declval<UTuple>()) , util::get< 10>( boost::declval<UTuple>()) , util::get< 11>( boost::declval<UTuple>()))
                ) == sizeof(yes_type);
            typedef boost::mpl::bool_<value> type;
        };
    }
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11>
    class tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11>
    {
    public:
        
        
        
        
        BOOST_CONSTEXPR tuple()
          : _m0() , _m1() , _m2() , _m3() , _m4() , _m5() , _m6() , _m7() , _m8() , _m9() , _m10() , _m11()
        {}
        
        
        
        BOOST_CONSTEXPR explicit tuple(
            typename add_lvalue_reference<typename boost::add_const<T0>::type>::type v0 , typename add_lvalue_reference<typename boost::add_const<T1>::type>::type v1 , typename add_lvalue_reference<typename boost::add_const<T2>::type>::type v2 , typename add_lvalue_reference<typename boost::add_const<T3>::type>::type v3 , typename add_lvalue_reference<typename boost::add_const<T4>::type>::type v4 , typename add_lvalue_reference<typename boost::add_const<T5>::type>::type v5 , typename add_lvalue_reference<typename boost::add_const<T6>::type>::type v6 , typename add_lvalue_reference<typename boost::add_const<T7>::type>::type v7 , typename add_lvalue_reference<typename boost::add_const<T8>::type>::type v8 , typename add_lvalue_reference<typename boost::add_const<T9>::type>::type v9 , typename add_lvalue_reference<typename boost::add_const<T10>::type>::type v10 , typename add_lvalue_reference<typename boost::add_const<T11>::type>::type v11
        ) : _m0(v0) , _m1(v1) , _m2(v2) , _m3(v3) , _m4(v4) , _m5(v5) , _m6(v6) , _m7(v7) , _m8(v8) , _m9(v9) , _m10(v10) , _m11(v11)
        {}
        
        
        
        
        
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11>
        BOOST_CONSTEXPR explicit tuple(
            BOOST_FWD_REF(U0) u0 , BOOST_FWD_REF(U1) u1 , BOOST_FWD_REF(U2) u2 , BOOST_FWD_REF(U3) u3 , BOOST_FWD_REF(U4) u4 , BOOST_FWD_REF(U5) u5 , BOOST_FWD_REF(U6) u6 , BOOST_FWD_REF(U7) u7 , BOOST_FWD_REF(U8) u8 , BOOST_FWD_REF(U9) u9 , BOOST_FWD_REF(U10) u10 , BOOST_FWD_REF(U11) u11
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<tuple<U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11> >::type
                >::value
            >::type* = 0
        ) : _m0(boost::forward<U0>(u0)) , _m1(boost::forward<U1>(u1)) , _m2(boost::forward<U2>(u2)) , _m3(boost::forward<U3>(u3)) , _m4(boost::forward<U4>(u4)) , _m5(boost::forward<U5>(u5)) , _m6(boost::forward<U6>(u6)) , _m7(boost::forward<U7>(u7)) , _m8(boost::forward<U8>(u8)) , _m9(boost::forward<U9>(u9)) , _m10(boost::forward<U10>(u10)) , _m11(boost::forward<U11>(u11))
        {}
        
        
        
        BOOST_CONSTEXPR tuple(tuple const& other)
          : _m0(other._m0) , _m1(other._m1) , _m2(other._m2) , _m3(other._m3) , _m4(other._m4) , _m5(other._m5) , _m6(other._m6) , _m7(other._m7) , _m8(other._m8) , _m9(other._m9) , _m10(other._m10) , _m11(other._m11)
        {}
        
        
        
        BOOST_CONSTEXPR tuple(BOOST_RV_REF(tuple) other)
          : _m0(boost::move(other._m0)) , _m1(boost::move(other._m1)) , _m2(boost::move(other._m2)) , _m3(boost::move(other._m3)) , _m4(boost::move(other._m4)) , _m5(boost::move(other._m5)) , _m6(boost::move(other._m6)) , _m7(boost::move(other._m7)) , _m8(boost::move(other._m8)) , _m9(boost::move(other._m9)) , _m10(boost::move(other._m10)) , _m11(boost::move(other._m11))
        {}
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        BOOST_CONSTEXPR tuple(
            BOOST_FWD_REF(UTuple) other
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<UTuple>::type
                >::value
            >::type* = 0
        ) : _m0(util::get< 0>(boost::forward<UTuple>(other))) , _m1(util::get< 1>(boost::forward<UTuple>(other))) , _m2(util::get< 2>(boost::forward<UTuple>(other))) , _m3(util::get< 3>(boost::forward<UTuple>(other))) , _m4(util::get< 4>(boost::forward<UTuple>(other))) , _m5(util::get< 5>(boost::forward<UTuple>(other))) , _m6(util::get< 6>(boost::forward<UTuple>(other))) , _m7(util::get< 7>(boost::forward<UTuple>(other))) , _m8(util::get< 8>(boost::forward<UTuple>(other))) , _m9(util::get< 9>(boost::forward<UTuple>(other))) , _m10(util::get< 10>(boost::forward<UTuple>(other))) , _m11(util::get< 11>(boost::forward<UTuple>(other)))
        {}
        
        
        
        
        
        tuple& operator=(tuple const& other)
        {
            _m0 = other._m0; _m1 = other._m1; _m2 = other._m2; _m3 = other._m3; _m4 = other._m4; _m5 = other._m5; _m6 = other._m6; _m7 = other._m7; _m8 = other._m8; _m9 = other._m9; _m10 = other._m10; _m11 = other._m11;;
            return *this;
        }
        
        
        
        
        
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            _m0 = boost::move(other._m0); _m1 = boost::move(other._m1); _m2 = boost::move(other._m2); _m3 = boost::move(other._m3); _m4 = boost::move(other._m4); _m5 = boost::move(other._m5); _m6 = boost::move(other._m6); _m7 = boost::move(other._m7); _m8 = boost::move(other._m8); _m9 = boost::move(other._m9); _m10 = boost::move(other._m10); _m11 = boost::move(other._m11);;
            return *this;
        }
        
        
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        typename boost::enable_if_c<
            tuple_size<typename remove_reference<UTuple>::type>::value == 12
          , tuple&
        >::type
        operator=(BOOST_FWD_REF(UTuple) other)
        {
            _m0 = util::get< 0>(boost::forward<UTuple>(other)); _m1 = util::get< 1>(boost::forward<UTuple>(other)); _m2 = util::get< 2>(boost::forward<UTuple>(other)); _m3 = util::get< 3>(boost::forward<UTuple>(other)); _m4 = util::get< 4>(boost::forward<UTuple>(other)); _m5 = util::get< 5>(boost::forward<UTuple>(other)); _m6 = util::get< 6>(boost::forward<UTuple>(other)); _m7 = util::get< 7>(boost::forward<UTuple>(other)); _m8 = util::get< 8>(boost::forward<UTuple>(other)); _m9 = util::get< 9>(boost::forward<UTuple>(other)); _m10 = util::get< 10>(boost::forward<UTuple>(other)); _m11 = util::get< 11>(boost::forward<UTuple>(other));;
            return *this;
        }
        
        
        
        
        
        
        void swap(tuple& other)
            BOOST_NOEXCEPT_IF(true && BOOST_NOEXCEPT_EXPR((boost::swap(_m0._value, other._m0._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m1._value, other._m1._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m2._value, other._m2._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m3._value, other._m3._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m4._value, other._m4._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m5._value, other._m5._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m6._value, other._m6._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m7._value, other._m7._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m8._value, other._m8._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m9._value, other._m9._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m10._value, other._m10._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m11._value, other._m11._value))))
        {
            boost::swap(_m0._value, other._m0._value); boost::swap(_m1._value, other._m1._value); boost::swap(_m2._value, other._m2._value); boost::swap(_m3._value, other._m3._value); boost::swap(_m4._value, other._m4._value); boost::swap(_m5._value, other._m5._value); boost::swap(_m6._value, other._m6._value); boost::swap(_m7._value, other._m7._value); boost::swap(_m8._value, other._m8._value); boost::swap(_m9._value, other._m9._value); boost::swap(_m10._value, other._m10._value); boost::swap(_m11._value, other._m11._value);;
        }
    public: 
        detail::tuple_member<T0> _m0; detail::tuple_member<T1> _m1; detail::tuple_member<T2> _m2; detail::tuple_member<T3> _m3; detail::tuple_member<T4> _m4; detail::tuple_member<T5> _m5; detail::tuple_member<T6> _m6; detail::tuple_member<T7> _m7; detail::tuple_member<T8> _m8; detail::tuple_member<T9> _m9; detail::tuple_member<T10> _m10; detail::tuple_member<T11> _m11;;
    };
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type , typename detail::make_tuple_element<T6>::type , typename detail::make_tuple_element<T7>::type , typename detail::make_tuple_element<T8>::type , typename detail::make_tuple_element<T9>::type , typename detail::make_tuple_element<T10>::type , typename detail::make_tuple_element<T11>::type>
    make_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5 , BOOST_FWD_REF(T6) v6 , BOOST_FWD_REF(T7) v7 , BOOST_FWD_REF(T8) v8 , BOOST_FWD_REF(T9) v9 , BOOST_FWD_REF(T10) v10 , BOOST_FWD_REF(T11) v11)
    {
        return
            tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type , typename detail::make_tuple_element<T6>::type , typename detail::make_tuple_element<T7>::type , typename detail::make_tuple_element<T8>::type , typename detail::make_tuple_element<T9>::type , typename detail::make_tuple_element<T10>::type , typename detail::make_tuple_element<T11>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5) , boost::forward<T6>(v6) , boost::forward<T7>(v7) , boost::forward<T8>(v8) , boost::forward<T9>(v9) , boost::forward<T10>(v10) , boost::forward<T11>(v11)
            );
    }
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11>
    BOOST_FORCEINLINE
    tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type , typename add_rvalue_reference<T6>::type , typename add_rvalue_reference<T7>::type , typename add_rvalue_reference<T8>::type , typename add_rvalue_reference<T9>::type , typename add_rvalue_reference<T10>::type , typename add_rvalue_reference<T11>::type>
    forward_as_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5 , BOOST_FWD_REF(T6) v6 , BOOST_FWD_REF(T7) v7 , BOOST_FWD_REF(T8) v8 , BOOST_FWD_REF(T9) v9 , BOOST_FWD_REF(T10) v10 , BOOST_FWD_REF(T11) v11) BOOST_NOEXCEPT
    {
        return
            tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type , typename add_rvalue_reference<T6>::type , typename add_rvalue_reference<T7>::type , typename add_rvalue_reference<T8>::type , typename add_rvalue_reference<T9>::type , typename add_rvalue_reference<T10>::type , typename add_rvalue_reference<T11>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5) , boost::forward<T6>(v6) , boost::forward<T7>(v7) , boost::forward<T8>(v8) , boost::forward<T9>(v9) , boost::forward<T10>(v10) , boost::forward<T11>(v11)
            );
    }
    
    
    
    
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11>
    BOOST_FORCEINLINE
    tuple<T0& , T1& , T2& , T3& , T4& , T5& , T6& , T7& , T8& , T9& , T10& , T11&>
    tie(T0& v0 , T1& v1 , T2& v2 , T3& v3 , T4& v4 , T5& v5 , T6& v6 , T7& v7 , T8& v8 , T9& v9 , T10& v10 , T11& v11) BOOST_NOEXCEPT
    {
        return
            tuple<T0& , T1& , T2& , T3& , T4& , T5& , T6& , T7& , T8& , T9& , T10& , T11&>(
                v0 , v1 , v2 , v3 , v4 , v5 , v6 , v7 , v8 , v9 , v10 , v11
            );
    }
    
    
    
    
    
    template <typename TTuple, typename UTuple>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename boost::lazy_enable_if_c<
        tuple_size<typename remove_reference<TTuple>::type>::value
      + tuple_size<typename remove_reference<UTuple>::type>::value == 12
      , detail::tuple_cat_result<TTuple, UTuple>
    >::type
    tuple_cat(BOOST_FWD_REF(TTuple) t, BOOST_FWD_REF(UTuple) u)
    {
        return
            typename detail::tuple_cat_result<TTuple, UTuple>::type(
                detail::tuple_cat_element< 0, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 1, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 2, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 3, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 4, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 5, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 6, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 7, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 8, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 9, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 10, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 11, T0, T1>::call(t0, t1)
            );
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename detail::tuple_cat_result<
        T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11
    >::type
    tuple_cat(BOOST_FWD_REF(T0) t0 , BOOST_FWD_REF(T1) t1 , BOOST_FWD_REF(T2) t2 , BOOST_FWD_REF(T3) t3 , BOOST_FWD_REF(T4) t4 , BOOST_FWD_REF(T5) t5 , BOOST_FWD_REF(T6) t6 , BOOST_FWD_REF(T7) t7 , BOOST_FWD_REF(T8) t8 , BOOST_FWD_REF(T9) t9 , BOOST_FWD_REF(T10) t10 , BOOST_FWD_REF(T11) t11)
    {
        return
            util::tuple_cat(
                util::tuple_cat( boost::forward<T0> (t0) , boost::forward<T1> (t1)) , util::tuple_cat( boost::forward<T2> (t2) , boost::forward<T3> (t3)) , util::tuple_cat( boost::forward<T4> (t4) , boost::forward<T5> (t5)) , util::tuple_cat( boost::forward<T6> (t6) , boost::forward<T7> (t7)) , util::tuple_cat( boost::forward<T8> (t8) , boost::forward<T9> (t9)) , util::tuple_cat( boost::forward<T10> (t10) , boost::forward<T11> (t11))
            );
    }
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11>
    struct tuple_size<tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11> >
      : boost::mpl::size_t<12>
    {};
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    struct tuple_element<11, tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19> >
      : boost::mpl::identity<T11>
    {
        template <typename Tuple>
        static BOOST_CONSTEXPR BOOST_FORCEINLINE
        typename detail::qualify_as<T11, Tuple&>::type
        get(Tuple& tuple) BOOST_NOEXCEPT
        {
            return tuple._m11._value;
        }
    };
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12, typename UTuple>
        struct are_tuples_compatible<
            tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12>, UTuple
          , typename boost::enable_if_c<
                tuple_size<typename remove_reference<UTuple>::type>::value == 13
            >::type
        >
        {
            typedef char(&no_type)[1];
            typedef char(&yes_type)[2];
            static no_type call(...);
            static yes_type call(T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12);
            static bool const value =
                sizeof(
                    call(util::get< 0>( boost::declval<UTuple>()) , util::get< 1>( boost::declval<UTuple>()) , util::get< 2>( boost::declval<UTuple>()) , util::get< 3>( boost::declval<UTuple>()) , util::get< 4>( boost::declval<UTuple>()) , util::get< 5>( boost::declval<UTuple>()) , util::get< 6>( boost::declval<UTuple>()) , util::get< 7>( boost::declval<UTuple>()) , util::get< 8>( boost::declval<UTuple>()) , util::get< 9>( boost::declval<UTuple>()) , util::get< 10>( boost::declval<UTuple>()) , util::get< 11>( boost::declval<UTuple>()) , util::get< 12>( boost::declval<UTuple>()))
                ) == sizeof(yes_type);
            typedef boost::mpl::bool_<value> type;
        };
    }
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12>
    class tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12>
    {
    public:
        
        
        
        
        BOOST_CONSTEXPR tuple()
          : _m0() , _m1() , _m2() , _m3() , _m4() , _m5() , _m6() , _m7() , _m8() , _m9() , _m10() , _m11() , _m12()
        {}
        
        
        
        BOOST_CONSTEXPR explicit tuple(
            typename add_lvalue_reference<typename boost::add_const<T0>::type>::type v0 , typename add_lvalue_reference<typename boost::add_const<T1>::type>::type v1 , typename add_lvalue_reference<typename boost::add_const<T2>::type>::type v2 , typename add_lvalue_reference<typename boost::add_const<T3>::type>::type v3 , typename add_lvalue_reference<typename boost::add_const<T4>::type>::type v4 , typename add_lvalue_reference<typename boost::add_const<T5>::type>::type v5 , typename add_lvalue_reference<typename boost::add_const<T6>::type>::type v6 , typename add_lvalue_reference<typename boost::add_const<T7>::type>::type v7 , typename add_lvalue_reference<typename boost::add_const<T8>::type>::type v8 , typename add_lvalue_reference<typename boost::add_const<T9>::type>::type v9 , typename add_lvalue_reference<typename boost::add_const<T10>::type>::type v10 , typename add_lvalue_reference<typename boost::add_const<T11>::type>::type v11 , typename add_lvalue_reference<typename boost::add_const<T12>::type>::type v12
        ) : _m0(v0) , _m1(v1) , _m2(v2) , _m3(v3) , _m4(v4) , _m5(v5) , _m6(v6) , _m7(v7) , _m8(v8) , _m9(v9) , _m10(v10) , _m11(v11) , _m12(v12)
        {}
        
        
        
        
        
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12>
        BOOST_CONSTEXPR explicit tuple(
            BOOST_FWD_REF(U0) u0 , BOOST_FWD_REF(U1) u1 , BOOST_FWD_REF(U2) u2 , BOOST_FWD_REF(U3) u3 , BOOST_FWD_REF(U4) u4 , BOOST_FWD_REF(U5) u5 , BOOST_FWD_REF(U6) u6 , BOOST_FWD_REF(U7) u7 , BOOST_FWD_REF(U8) u8 , BOOST_FWD_REF(U9) u9 , BOOST_FWD_REF(U10) u10 , BOOST_FWD_REF(U11) u11 , BOOST_FWD_REF(U12) u12
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<tuple<U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12> >::type
                >::value
            >::type* = 0
        ) : _m0(boost::forward<U0>(u0)) , _m1(boost::forward<U1>(u1)) , _m2(boost::forward<U2>(u2)) , _m3(boost::forward<U3>(u3)) , _m4(boost::forward<U4>(u4)) , _m5(boost::forward<U5>(u5)) , _m6(boost::forward<U6>(u6)) , _m7(boost::forward<U7>(u7)) , _m8(boost::forward<U8>(u8)) , _m9(boost::forward<U9>(u9)) , _m10(boost::forward<U10>(u10)) , _m11(boost::forward<U11>(u11)) , _m12(boost::forward<U12>(u12))
        {}
        
        
        
        BOOST_CONSTEXPR tuple(tuple const& other)
          : _m0(other._m0) , _m1(other._m1) , _m2(other._m2) , _m3(other._m3) , _m4(other._m4) , _m5(other._m5) , _m6(other._m6) , _m7(other._m7) , _m8(other._m8) , _m9(other._m9) , _m10(other._m10) , _m11(other._m11) , _m12(other._m12)
        {}
        
        
        
        BOOST_CONSTEXPR tuple(BOOST_RV_REF(tuple) other)
          : _m0(boost::move(other._m0)) , _m1(boost::move(other._m1)) , _m2(boost::move(other._m2)) , _m3(boost::move(other._m3)) , _m4(boost::move(other._m4)) , _m5(boost::move(other._m5)) , _m6(boost::move(other._m6)) , _m7(boost::move(other._m7)) , _m8(boost::move(other._m8)) , _m9(boost::move(other._m9)) , _m10(boost::move(other._m10)) , _m11(boost::move(other._m11)) , _m12(boost::move(other._m12))
        {}
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        BOOST_CONSTEXPR tuple(
            BOOST_FWD_REF(UTuple) other
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<UTuple>::type
                >::value
            >::type* = 0
        ) : _m0(util::get< 0>(boost::forward<UTuple>(other))) , _m1(util::get< 1>(boost::forward<UTuple>(other))) , _m2(util::get< 2>(boost::forward<UTuple>(other))) , _m3(util::get< 3>(boost::forward<UTuple>(other))) , _m4(util::get< 4>(boost::forward<UTuple>(other))) , _m5(util::get< 5>(boost::forward<UTuple>(other))) , _m6(util::get< 6>(boost::forward<UTuple>(other))) , _m7(util::get< 7>(boost::forward<UTuple>(other))) , _m8(util::get< 8>(boost::forward<UTuple>(other))) , _m9(util::get< 9>(boost::forward<UTuple>(other))) , _m10(util::get< 10>(boost::forward<UTuple>(other))) , _m11(util::get< 11>(boost::forward<UTuple>(other))) , _m12(util::get< 12>(boost::forward<UTuple>(other)))
        {}
        
        
        
        
        
        tuple& operator=(tuple const& other)
        {
            _m0 = other._m0; _m1 = other._m1; _m2 = other._m2; _m3 = other._m3; _m4 = other._m4; _m5 = other._m5; _m6 = other._m6; _m7 = other._m7; _m8 = other._m8; _m9 = other._m9; _m10 = other._m10; _m11 = other._m11; _m12 = other._m12;;
            return *this;
        }
        
        
        
        
        
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            _m0 = boost::move(other._m0); _m1 = boost::move(other._m1); _m2 = boost::move(other._m2); _m3 = boost::move(other._m3); _m4 = boost::move(other._m4); _m5 = boost::move(other._m5); _m6 = boost::move(other._m6); _m7 = boost::move(other._m7); _m8 = boost::move(other._m8); _m9 = boost::move(other._m9); _m10 = boost::move(other._m10); _m11 = boost::move(other._m11); _m12 = boost::move(other._m12);;
            return *this;
        }
        
        
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        typename boost::enable_if_c<
            tuple_size<typename remove_reference<UTuple>::type>::value == 13
          , tuple&
        >::type
        operator=(BOOST_FWD_REF(UTuple) other)
        {
            _m0 = util::get< 0>(boost::forward<UTuple>(other)); _m1 = util::get< 1>(boost::forward<UTuple>(other)); _m2 = util::get< 2>(boost::forward<UTuple>(other)); _m3 = util::get< 3>(boost::forward<UTuple>(other)); _m4 = util::get< 4>(boost::forward<UTuple>(other)); _m5 = util::get< 5>(boost::forward<UTuple>(other)); _m6 = util::get< 6>(boost::forward<UTuple>(other)); _m7 = util::get< 7>(boost::forward<UTuple>(other)); _m8 = util::get< 8>(boost::forward<UTuple>(other)); _m9 = util::get< 9>(boost::forward<UTuple>(other)); _m10 = util::get< 10>(boost::forward<UTuple>(other)); _m11 = util::get< 11>(boost::forward<UTuple>(other)); _m12 = util::get< 12>(boost::forward<UTuple>(other));;
            return *this;
        }
        
        
        
        
        
        
        void swap(tuple& other)
            BOOST_NOEXCEPT_IF(true && BOOST_NOEXCEPT_EXPR((boost::swap(_m0._value, other._m0._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m1._value, other._m1._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m2._value, other._m2._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m3._value, other._m3._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m4._value, other._m4._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m5._value, other._m5._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m6._value, other._m6._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m7._value, other._m7._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m8._value, other._m8._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m9._value, other._m9._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m10._value, other._m10._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m11._value, other._m11._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m12._value, other._m12._value))))
        {
            boost::swap(_m0._value, other._m0._value); boost::swap(_m1._value, other._m1._value); boost::swap(_m2._value, other._m2._value); boost::swap(_m3._value, other._m3._value); boost::swap(_m4._value, other._m4._value); boost::swap(_m5._value, other._m5._value); boost::swap(_m6._value, other._m6._value); boost::swap(_m7._value, other._m7._value); boost::swap(_m8._value, other._m8._value); boost::swap(_m9._value, other._m9._value); boost::swap(_m10._value, other._m10._value); boost::swap(_m11._value, other._m11._value); boost::swap(_m12._value, other._m12._value);;
        }
    public: 
        detail::tuple_member<T0> _m0; detail::tuple_member<T1> _m1; detail::tuple_member<T2> _m2; detail::tuple_member<T3> _m3; detail::tuple_member<T4> _m4; detail::tuple_member<T5> _m5; detail::tuple_member<T6> _m6; detail::tuple_member<T7> _m7; detail::tuple_member<T8> _m8; detail::tuple_member<T9> _m9; detail::tuple_member<T10> _m10; detail::tuple_member<T11> _m11; detail::tuple_member<T12> _m12;;
    };
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type , typename detail::make_tuple_element<T6>::type , typename detail::make_tuple_element<T7>::type , typename detail::make_tuple_element<T8>::type , typename detail::make_tuple_element<T9>::type , typename detail::make_tuple_element<T10>::type , typename detail::make_tuple_element<T11>::type , typename detail::make_tuple_element<T12>::type>
    make_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5 , BOOST_FWD_REF(T6) v6 , BOOST_FWD_REF(T7) v7 , BOOST_FWD_REF(T8) v8 , BOOST_FWD_REF(T9) v9 , BOOST_FWD_REF(T10) v10 , BOOST_FWD_REF(T11) v11 , BOOST_FWD_REF(T12) v12)
    {
        return
            tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type , typename detail::make_tuple_element<T6>::type , typename detail::make_tuple_element<T7>::type , typename detail::make_tuple_element<T8>::type , typename detail::make_tuple_element<T9>::type , typename detail::make_tuple_element<T10>::type , typename detail::make_tuple_element<T11>::type , typename detail::make_tuple_element<T12>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5) , boost::forward<T6>(v6) , boost::forward<T7>(v7) , boost::forward<T8>(v8) , boost::forward<T9>(v9) , boost::forward<T10>(v10) , boost::forward<T11>(v11) , boost::forward<T12>(v12)
            );
    }
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12>
    BOOST_FORCEINLINE
    tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type , typename add_rvalue_reference<T6>::type , typename add_rvalue_reference<T7>::type , typename add_rvalue_reference<T8>::type , typename add_rvalue_reference<T9>::type , typename add_rvalue_reference<T10>::type , typename add_rvalue_reference<T11>::type , typename add_rvalue_reference<T12>::type>
    forward_as_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5 , BOOST_FWD_REF(T6) v6 , BOOST_FWD_REF(T7) v7 , BOOST_FWD_REF(T8) v8 , BOOST_FWD_REF(T9) v9 , BOOST_FWD_REF(T10) v10 , BOOST_FWD_REF(T11) v11 , BOOST_FWD_REF(T12) v12) BOOST_NOEXCEPT
    {
        return
            tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type , typename add_rvalue_reference<T6>::type , typename add_rvalue_reference<T7>::type , typename add_rvalue_reference<T8>::type , typename add_rvalue_reference<T9>::type , typename add_rvalue_reference<T10>::type , typename add_rvalue_reference<T11>::type , typename add_rvalue_reference<T12>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5) , boost::forward<T6>(v6) , boost::forward<T7>(v7) , boost::forward<T8>(v8) , boost::forward<T9>(v9) , boost::forward<T10>(v10) , boost::forward<T11>(v11) , boost::forward<T12>(v12)
            );
    }
    
    
    
    
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12>
    BOOST_FORCEINLINE
    tuple<T0& , T1& , T2& , T3& , T4& , T5& , T6& , T7& , T8& , T9& , T10& , T11& , T12&>
    tie(T0& v0 , T1& v1 , T2& v2 , T3& v3 , T4& v4 , T5& v5 , T6& v6 , T7& v7 , T8& v8 , T9& v9 , T10& v10 , T11& v11 , T12& v12) BOOST_NOEXCEPT
    {
        return
            tuple<T0& , T1& , T2& , T3& , T4& , T5& , T6& , T7& , T8& , T9& , T10& , T11& , T12&>(
                v0 , v1 , v2 , v3 , v4 , v5 , v6 , v7 , v8 , v9 , v10 , v11 , v12
            );
    }
    
    
    
    
    
    template <typename TTuple, typename UTuple>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename boost::lazy_enable_if_c<
        tuple_size<typename remove_reference<TTuple>::type>::value
      + tuple_size<typename remove_reference<UTuple>::type>::value == 13
      , detail::tuple_cat_result<TTuple, UTuple>
    >::type
    tuple_cat(BOOST_FWD_REF(TTuple) t, BOOST_FWD_REF(UTuple) u)
    {
        return
            typename detail::tuple_cat_result<TTuple, UTuple>::type(
                detail::tuple_cat_element< 0, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 1, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 2, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 3, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 4, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 5, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 6, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 7, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 8, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 9, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 10, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 11, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 12, T0, T1>::call(t0, t1)
            );
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename detail::tuple_cat_result<
        T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12
    >::type
    tuple_cat(BOOST_FWD_REF(T0) t0 , BOOST_FWD_REF(T1) t1 , BOOST_FWD_REF(T2) t2 , BOOST_FWD_REF(T3) t3 , BOOST_FWD_REF(T4) t4 , BOOST_FWD_REF(T5) t5 , BOOST_FWD_REF(T6) t6 , BOOST_FWD_REF(T7) t7 , BOOST_FWD_REF(T8) t8 , BOOST_FWD_REF(T9) t9 , BOOST_FWD_REF(T10) t10 , BOOST_FWD_REF(T11) t11 , BOOST_FWD_REF(T12) t12)
    {
        return
            util::tuple_cat(
                util::tuple_cat( boost::forward<T0> (t0) , boost::forward<T1> (t1)) , util::tuple_cat( boost::forward<T2> (t2) , boost::forward<T3> (t3)) , util::tuple_cat( boost::forward<T4> (t4) , boost::forward<T5> (t5)) , util::tuple_cat( boost::forward<T6> (t6) , boost::forward<T7> (t7)) , util::tuple_cat( boost::forward<T8> (t8) , boost::forward<T9> (t9)) , util::tuple_cat( boost::forward<T10> (t10) , boost::forward<T11> (t11))
              , boost::forward<T12>
                    (t12)
            );
    }
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12>
    struct tuple_size<tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12> >
      : boost::mpl::size_t<13>
    {};
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    struct tuple_element<12, tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19> >
      : boost::mpl::identity<T12>
    {
        template <typename Tuple>
        static BOOST_CONSTEXPR BOOST_FORCEINLINE
        typename detail::qualify_as<T12, Tuple&>::type
        get(Tuple& tuple) BOOST_NOEXCEPT
        {
            return tuple._m12._value;
        }
    };
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13, typename UTuple>
        struct are_tuples_compatible<
            tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13>, UTuple
          , typename boost::enable_if_c<
                tuple_size<typename remove_reference<UTuple>::type>::value == 14
            >::type
        >
        {
            typedef char(&no_type)[1];
            typedef char(&yes_type)[2];
            static no_type call(...);
            static yes_type call(T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13);
            static bool const value =
                sizeof(
                    call(util::get< 0>( boost::declval<UTuple>()) , util::get< 1>( boost::declval<UTuple>()) , util::get< 2>( boost::declval<UTuple>()) , util::get< 3>( boost::declval<UTuple>()) , util::get< 4>( boost::declval<UTuple>()) , util::get< 5>( boost::declval<UTuple>()) , util::get< 6>( boost::declval<UTuple>()) , util::get< 7>( boost::declval<UTuple>()) , util::get< 8>( boost::declval<UTuple>()) , util::get< 9>( boost::declval<UTuple>()) , util::get< 10>( boost::declval<UTuple>()) , util::get< 11>( boost::declval<UTuple>()) , util::get< 12>( boost::declval<UTuple>()) , util::get< 13>( boost::declval<UTuple>()))
                ) == sizeof(yes_type);
            typedef boost::mpl::bool_<value> type;
        };
    }
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13>
    class tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13>
    {
    public:
        
        
        
        
        BOOST_CONSTEXPR tuple()
          : _m0() , _m1() , _m2() , _m3() , _m4() , _m5() , _m6() , _m7() , _m8() , _m9() , _m10() , _m11() , _m12() , _m13()
        {}
        
        
        
        BOOST_CONSTEXPR explicit tuple(
            typename add_lvalue_reference<typename boost::add_const<T0>::type>::type v0 , typename add_lvalue_reference<typename boost::add_const<T1>::type>::type v1 , typename add_lvalue_reference<typename boost::add_const<T2>::type>::type v2 , typename add_lvalue_reference<typename boost::add_const<T3>::type>::type v3 , typename add_lvalue_reference<typename boost::add_const<T4>::type>::type v4 , typename add_lvalue_reference<typename boost::add_const<T5>::type>::type v5 , typename add_lvalue_reference<typename boost::add_const<T6>::type>::type v6 , typename add_lvalue_reference<typename boost::add_const<T7>::type>::type v7 , typename add_lvalue_reference<typename boost::add_const<T8>::type>::type v8 , typename add_lvalue_reference<typename boost::add_const<T9>::type>::type v9 , typename add_lvalue_reference<typename boost::add_const<T10>::type>::type v10 , typename add_lvalue_reference<typename boost::add_const<T11>::type>::type v11 , typename add_lvalue_reference<typename boost::add_const<T12>::type>::type v12 , typename add_lvalue_reference<typename boost::add_const<T13>::type>::type v13
        ) : _m0(v0) , _m1(v1) , _m2(v2) , _m3(v3) , _m4(v4) , _m5(v5) , _m6(v6) , _m7(v7) , _m8(v8) , _m9(v9) , _m10(v10) , _m11(v11) , _m12(v12) , _m13(v13)
        {}
        
        
        
        
        
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13>
        BOOST_CONSTEXPR explicit tuple(
            BOOST_FWD_REF(U0) u0 , BOOST_FWD_REF(U1) u1 , BOOST_FWD_REF(U2) u2 , BOOST_FWD_REF(U3) u3 , BOOST_FWD_REF(U4) u4 , BOOST_FWD_REF(U5) u5 , BOOST_FWD_REF(U6) u6 , BOOST_FWD_REF(U7) u7 , BOOST_FWD_REF(U8) u8 , BOOST_FWD_REF(U9) u9 , BOOST_FWD_REF(U10) u10 , BOOST_FWD_REF(U11) u11 , BOOST_FWD_REF(U12) u12 , BOOST_FWD_REF(U13) u13
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<tuple<U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12 , U13> >::type
                >::value
            >::type* = 0
        ) : _m0(boost::forward<U0>(u0)) , _m1(boost::forward<U1>(u1)) , _m2(boost::forward<U2>(u2)) , _m3(boost::forward<U3>(u3)) , _m4(boost::forward<U4>(u4)) , _m5(boost::forward<U5>(u5)) , _m6(boost::forward<U6>(u6)) , _m7(boost::forward<U7>(u7)) , _m8(boost::forward<U8>(u8)) , _m9(boost::forward<U9>(u9)) , _m10(boost::forward<U10>(u10)) , _m11(boost::forward<U11>(u11)) , _m12(boost::forward<U12>(u12)) , _m13(boost::forward<U13>(u13))
        {}
        
        
        
        BOOST_CONSTEXPR tuple(tuple const& other)
          : _m0(other._m0) , _m1(other._m1) , _m2(other._m2) , _m3(other._m3) , _m4(other._m4) , _m5(other._m5) , _m6(other._m6) , _m7(other._m7) , _m8(other._m8) , _m9(other._m9) , _m10(other._m10) , _m11(other._m11) , _m12(other._m12) , _m13(other._m13)
        {}
        
        
        
        BOOST_CONSTEXPR tuple(BOOST_RV_REF(tuple) other)
          : _m0(boost::move(other._m0)) , _m1(boost::move(other._m1)) , _m2(boost::move(other._m2)) , _m3(boost::move(other._m3)) , _m4(boost::move(other._m4)) , _m5(boost::move(other._m5)) , _m6(boost::move(other._m6)) , _m7(boost::move(other._m7)) , _m8(boost::move(other._m8)) , _m9(boost::move(other._m9)) , _m10(boost::move(other._m10)) , _m11(boost::move(other._m11)) , _m12(boost::move(other._m12)) , _m13(boost::move(other._m13))
        {}
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        BOOST_CONSTEXPR tuple(
            BOOST_FWD_REF(UTuple) other
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<UTuple>::type
                >::value
            >::type* = 0
        ) : _m0(util::get< 0>(boost::forward<UTuple>(other))) , _m1(util::get< 1>(boost::forward<UTuple>(other))) , _m2(util::get< 2>(boost::forward<UTuple>(other))) , _m3(util::get< 3>(boost::forward<UTuple>(other))) , _m4(util::get< 4>(boost::forward<UTuple>(other))) , _m5(util::get< 5>(boost::forward<UTuple>(other))) , _m6(util::get< 6>(boost::forward<UTuple>(other))) , _m7(util::get< 7>(boost::forward<UTuple>(other))) , _m8(util::get< 8>(boost::forward<UTuple>(other))) , _m9(util::get< 9>(boost::forward<UTuple>(other))) , _m10(util::get< 10>(boost::forward<UTuple>(other))) , _m11(util::get< 11>(boost::forward<UTuple>(other))) , _m12(util::get< 12>(boost::forward<UTuple>(other))) , _m13(util::get< 13>(boost::forward<UTuple>(other)))
        {}
        
        
        
        
        
        tuple& operator=(tuple const& other)
        {
            _m0 = other._m0; _m1 = other._m1; _m2 = other._m2; _m3 = other._m3; _m4 = other._m4; _m5 = other._m5; _m6 = other._m6; _m7 = other._m7; _m8 = other._m8; _m9 = other._m9; _m10 = other._m10; _m11 = other._m11; _m12 = other._m12; _m13 = other._m13;;
            return *this;
        }
        
        
        
        
        
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            _m0 = boost::move(other._m0); _m1 = boost::move(other._m1); _m2 = boost::move(other._m2); _m3 = boost::move(other._m3); _m4 = boost::move(other._m4); _m5 = boost::move(other._m5); _m6 = boost::move(other._m6); _m7 = boost::move(other._m7); _m8 = boost::move(other._m8); _m9 = boost::move(other._m9); _m10 = boost::move(other._m10); _m11 = boost::move(other._m11); _m12 = boost::move(other._m12); _m13 = boost::move(other._m13);;
            return *this;
        }
        
        
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        typename boost::enable_if_c<
            tuple_size<typename remove_reference<UTuple>::type>::value == 14
          , tuple&
        >::type
        operator=(BOOST_FWD_REF(UTuple) other)
        {
            _m0 = util::get< 0>(boost::forward<UTuple>(other)); _m1 = util::get< 1>(boost::forward<UTuple>(other)); _m2 = util::get< 2>(boost::forward<UTuple>(other)); _m3 = util::get< 3>(boost::forward<UTuple>(other)); _m4 = util::get< 4>(boost::forward<UTuple>(other)); _m5 = util::get< 5>(boost::forward<UTuple>(other)); _m6 = util::get< 6>(boost::forward<UTuple>(other)); _m7 = util::get< 7>(boost::forward<UTuple>(other)); _m8 = util::get< 8>(boost::forward<UTuple>(other)); _m9 = util::get< 9>(boost::forward<UTuple>(other)); _m10 = util::get< 10>(boost::forward<UTuple>(other)); _m11 = util::get< 11>(boost::forward<UTuple>(other)); _m12 = util::get< 12>(boost::forward<UTuple>(other)); _m13 = util::get< 13>(boost::forward<UTuple>(other));;
            return *this;
        }
        
        
        
        
        
        
        void swap(tuple& other)
            BOOST_NOEXCEPT_IF(true && BOOST_NOEXCEPT_EXPR((boost::swap(_m0._value, other._m0._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m1._value, other._m1._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m2._value, other._m2._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m3._value, other._m3._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m4._value, other._m4._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m5._value, other._m5._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m6._value, other._m6._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m7._value, other._m7._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m8._value, other._m8._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m9._value, other._m9._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m10._value, other._m10._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m11._value, other._m11._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m12._value, other._m12._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m13._value, other._m13._value))))
        {
            boost::swap(_m0._value, other._m0._value); boost::swap(_m1._value, other._m1._value); boost::swap(_m2._value, other._m2._value); boost::swap(_m3._value, other._m3._value); boost::swap(_m4._value, other._m4._value); boost::swap(_m5._value, other._m5._value); boost::swap(_m6._value, other._m6._value); boost::swap(_m7._value, other._m7._value); boost::swap(_m8._value, other._m8._value); boost::swap(_m9._value, other._m9._value); boost::swap(_m10._value, other._m10._value); boost::swap(_m11._value, other._m11._value); boost::swap(_m12._value, other._m12._value); boost::swap(_m13._value, other._m13._value);;
        }
    public: 
        detail::tuple_member<T0> _m0; detail::tuple_member<T1> _m1; detail::tuple_member<T2> _m2; detail::tuple_member<T3> _m3; detail::tuple_member<T4> _m4; detail::tuple_member<T5> _m5; detail::tuple_member<T6> _m6; detail::tuple_member<T7> _m7; detail::tuple_member<T8> _m8; detail::tuple_member<T9> _m9; detail::tuple_member<T10> _m10; detail::tuple_member<T11> _m11; detail::tuple_member<T12> _m12; detail::tuple_member<T13> _m13;;
    };
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type , typename detail::make_tuple_element<T6>::type , typename detail::make_tuple_element<T7>::type , typename detail::make_tuple_element<T8>::type , typename detail::make_tuple_element<T9>::type , typename detail::make_tuple_element<T10>::type , typename detail::make_tuple_element<T11>::type , typename detail::make_tuple_element<T12>::type , typename detail::make_tuple_element<T13>::type>
    make_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5 , BOOST_FWD_REF(T6) v6 , BOOST_FWD_REF(T7) v7 , BOOST_FWD_REF(T8) v8 , BOOST_FWD_REF(T9) v9 , BOOST_FWD_REF(T10) v10 , BOOST_FWD_REF(T11) v11 , BOOST_FWD_REF(T12) v12 , BOOST_FWD_REF(T13) v13)
    {
        return
            tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type , typename detail::make_tuple_element<T6>::type , typename detail::make_tuple_element<T7>::type , typename detail::make_tuple_element<T8>::type , typename detail::make_tuple_element<T9>::type , typename detail::make_tuple_element<T10>::type , typename detail::make_tuple_element<T11>::type , typename detail::make_tuple_element<T12>::type , typename detail::make_tuple_element<T13>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5) , boost::forward<T6>(v6) , boost::forward<T7>(v7) , boost::forward<T8>(v8) , boost::forward<T9>(v9) , boost::forward<T10>(v10) , boost::forward<T11>(v11) , boost::forward<T12>(v12) , boost::forward<T13>(v13)
            );
    }
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13>
    BOOST_FORCEINLINE
    tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type , typename add_rvalue_reference<T6>::type , typename add_rvalue_reference<T7>::type , typename add_rvalue_reference<T8>::type , typename add_rvalue_reference<T9>::type , typename add_rvalue_reference<T10>::type , typename add_rvalue_reference<T11>::type , typename add_rvalue_reference<T12>::type , typename add_rvalue_reference<T13>::type>
    forward_as_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5 , BOOST_FWD_REF(T6) v6 , BOOST_FWD_REF(T7) v7 , BOOST_FWD_REF(T8) v8 , BOOST_FWD_REF(T9) v9 , BOOST_FWD_REF(T10) v10 , BOOST_FWD_REF(T11) v11 , BOOST_FWD_REF(T12) v12 , BOOST_FWD_REF(T13) v13) BOOST_NOEXCEPT
    {
        return
            tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type , typename add_rvalue_reference<T6>::type , typename add_rvalue_reference<T7>::type , typename add_rvalue_reference<T8>::type , typename add_rvalue_reference<T9>::type , typename add_rvalue_reference<T10>::type , typename add_rvalue_reference<T11>::type , typename add_rvalue_reference<T12>::type , typename add_rvalue_reference<T13>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5) , boost::forward<T6>(v6) , boost::forward<T7>(v7) , boost::forward<T8>(v8) , boost::forward<T9>(v9) , boost::forward<T10>(v10) , boost::forward<T11>(v11) , boost::forward<T12>(v12) , boost::forward<T13>(v13)
            );
    }
    
    
    
    
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13>
    BOOST_FORCEINLINE
    tuple<T0& , T1& , T2& , T3& , T4& , T5& , T6& , T7& , T8& , T9& , T10& , T11& , T12& , T13&>
    tie(T0& v0 , T1& v1 , T2& v2 , T3& v3 , T4& v4 , T5& v5 , T6& v6 , T7& v7 , T8& v8 , T9& v9 , T10& v10 , T11& v11 , T12& v12 , T13& v13) BOOST_NOEXCEPT
    {
        return
            tuple<T0& , T1& , T2& , T3& , T4& , T5& , T6& , T7& , T8& , T9& , T10& , T11& , T12& , T13&>(
                v0 , v1 , v2 , v3 , v4 , v5 , v6 , v7 , v8 , v9 , v10 , v11 , v12 , v13
            );
    }
    
    
    
    
    
    template <typename TTuple, typename UTuple>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename boost::lazy_enable_if_c<
        tuple_size<typename remove_reference<TTuple>::type>::value
      + tuple_size<typename remove_reference<UTuple>::type>::value == 14
      , detail::tuple_cat_result<TTuple, UTuple>
    >::type
    tuple_cat(BOOST_FWD_REF(TTuple) t, BOOST_FWD_REF(UTuple) u)
    {
        return
            typename detail::tuple_cat_result<TTuple, UTuple>::type(
                detail::tuple_cat_element< 0, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 1, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 2, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 3, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 4, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 5, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 6, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 7, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 8, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 9, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 10, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 11, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 12, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 13, T0, T1>::call(t0, t1)
            );
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename detail::tuple_cat_result<
        T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13
    >::type
    tuple_cat(BOOST_FWD_REF(T0) t0 , BOOST_FWD_REF(T1) t1 , BOOST_FWD_REF(T2) t2 , BOOST_FWD_REF(T3) t3 , BOOST_FWD_REF(T4) t4 , BOOST_FWD_REF(T5) t5 , BOOST_FWD_REF(T6) t6 , BOOST_FWD_REF(T7) t7 , BOOST_FWD_REF(T8) t8 , BOOST_FWD_REF(T9) t9 , BOOST_FWD_REF(T10) t10 , BOOST_FWD_REF(T11) t11 , BOOST_FWD_REF(T12) t12 , BOOST_FWD_REF(T13) t13)
    {
        return
            util::tuple_cat(
                util::tuple_cat( boost::forward<T0> (t0) , boost::forward<T1> (t1)) , util::tuple_cat( boost::forward<T2> (t2) , boost::forward<T3> (t3)) , util::tuple_cat( boost::forward<T4> (t4) , boost::forward<T5> (t5)) , util::tuple_cat( boost::forward<T6> (t6) , boost::forward<T7> (t7)) , util::tuple_cat( boost::forward<T8> (t8) , boost::forward<T9> (t9)) , util::tuple_cat( boost::forward<T10> (t10) , boost::forward<T11> (t11)) , util::tuple_cat( boost::forward<T12> (t12) , boost::forward<T13> (t13))
            );
    }
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13>
    struct tuple_size<tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13> >
      : boost::mpl::size_t<14>
    {};
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    struct tuple_element<13, tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19> >
      : boost::mpl::identity<T13>
    {
        template <typename Tuple>
        static BOOST_CONSTEXPR BOOST_FORCEINLINE
        typename detail::qualify_as<T13, Tuple&>::type
        get(Tuple& tuple) BOOST_NOEXCEPT
        {
            return tuple._m13._value;
        }
    };
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14, typename UTuple>
        struct are_tuples_compatible<
            tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14>, UTuple
          , typename boost::enable_if_c<
                tuple_size<typename remove_reference<UTuple>::type>::value == 15
            >::type
        >
        {
            typedef char(&no_type)[1];
            typedef char(&yes_type)[2];
            static no_type call(...);
            static yes_type call(T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14);
            static bool const value =
                sizeof(
                    call(util::get< 0>( boost::declval<UTuple>()) , util::get< 1>( boost::declval<UTuple>()) , util::get< 2>( boost::declval<UTuple>()) , util::get< 3>( boost::declval<UTuple>()) , util::get< 4>( boost::declval<UTuple>()) , util::get< 5>( boost::declval<UTuple>()) , util::get< 6>( boost::declval<UTuple>()) , util::get< 7>( boost::declval<UTuple>()) , util::get< 8>( boost::declval<UTuple>()) , util::get< 9>( boost::declval<UTuple>()) , util::get< 10>( boost::declval<UTuple>()) , util::get< 11>( boost::declval<UTuple>()) , util::get< 12>( boost::declval<UTuple>()) , util::get< 13>( boost::declval<UTuple>()) , util::get< 14>( boost::declval<UTuple>()))
                ) == sizeof(yes_type);
            typedef boost::mpl::bool_<value> type;
        };
    }
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14>
    class tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14>
    {
    public:
        
        
        
        
        BOOST_CONSTEXPR tuple()
          : _m0() , _m1() , _m2() , _m3() , _m4() , _m5() , _m6() , _m7() , _m8() , _m9() , _m10() , _m11() , _m12() , _m13() , _m14()
        {}
        
        
        
        BOOST_CONSTEXPR explicit tuple(
            typename add_lvalue_reference<typename boost::add_const<T0>::type>::type v0 , typename add_lvalue_reference<typename boost::add_const<T1>::type>::type v1 , typename add_lvalue_reference<typename boost::add_const<T2>::type>::type v2 , typename add_lvalue_reference<typename boost::add_const<T3>::type>::type v3 , typename add_lvalue_reference<typename boost::add_const<T4>::type>::type v4 , typename add_lvalue_reference<typename boost::add_const<T5>::type>::type v5 , typename add_lvalue_reference<typename boost::add_const<T6>::type>::type v6 , typename add_lvalue_reference<typename boost::add_const<T7>::type>::type v7 , typename add_lvalue_reference<typename boost::add_const<T8>::type>::type v8 , typename add_lvalue_reference<typename boost::add_const<T9>::type>::type v9 , typename add_lvalue_reference<typename boost::add_const<T10>::type>::type v10 , typename add_lvalue_reference<typename boost::add_const<T11>::type>::type v11 , typename add_lvalue_reference<typename boost::add_const<T12>::type>::type v12 , typename add_lvalue_reference<typename boost::add_const<T13>::type>::type v13 , typename add_lvalue_reference<typename boost::add_const<T14>::type>::type v14
        ) : _m0(v0) , _m1(v1) , _m2(v2) , _m3(v3) , _m4(v4) , _m5(v5) , _m6(v6) , _m7(v7) , _m8(v8) , _m9(v9) , _m10(v10) , _m11(v11) , _m12(v12) , _m13(v13) , _m14(v14)
        {}
        
        
        
        
        
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14>
        BOOST_CONSTEXPR explicit tuple(
            BOOST_FWD_REF(U0) u0 , BOOST_FWD_REF(U1) u1 , BOOST_FWD_REF(U2) u2 , BOOST_FWD_REF(U3) u3 , BOOST_FWD_REF(U4) u4 , BOOST_FWD_REF(U5) u5 , BOOST_FWD_REF(U6) u6 , BOOST_FWD_REF(U7) u7 , BOOST_FWD_REF(U8) u8 , BOOST_FWD_REF(U9) u9 , BOOST_FWD_REF(U10) u10 , BOOST_FWD_REF(U11) u11 , BOOST_FWD_REF(U12) u12 , BOOST_FWD_REF(U13) u13 , BOOST_FWD_REF(U14) u14
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<tuple<U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12 , U13 , U14> >::type
                >::value
            >::type* = 0
        ) : _m0(boost::forward<U0>(u0)) , _m1(boost::forward<U1>(u1)) , _m2(boost::forward<U2>(u2)) , _m3(boost::forward<U3>(u3)) , _m4(boost::forward<U4>(u4)) , _m5(boost::forward<U5>(u5)) , _m6(boost::forward<U6>(u6)) , _m7(boost::forward<U7>(u7)) , _m8(boost::forward<U8>(u8)) , _m9(boost::forward<U9>(u9)) , _m10(boost::forward<U10>(u10)) , _m11(boost::forward<U11>(u11)) , _m12(boost::forward<U12>(u12)) , _m13(boost::forward<U13>(u13)) , _m14(boost::forward<U14>(u14))
        {}
        
        
        
        BOOST_CONSTEXPR tuple(tuple const& other)
          : _m0(other._m0) , _m1(other._m1) , _m2(other._m2) , _m3(other._m3) , _m4(other._m4) , _m5(other._m5) , _m6(other._m6) , _m7(other._m7) , _m8(other._m8) , _m9(other._m9) , _m10(other._m10) , _m11(other._m11) , _m12(other._m12) , _m13(other._m13) , _m14(other._m14)
        {}
        
        
        
        BOOST_CONSTEXPR tuple(BOOST_RV_REF(tuple) other)
          : _m0(boost::move(other._m0)) , _m1(boost::move(other._m1)) , _m2(boost::move(other._m2)) , _m3(boost::move(other._m3)) , _m4(boost::move(other._m4)) , _m5(boost::move(other._m5)) , _m6(boost::move(other._m6)) , _m7(boost::move(other._m7)) , _m8(boost::move(other._m8)) , _m9(boost::move(other._m9)) , _m10(boost::move(other._m10)) , _m11(boost::move(other._m11)) , _m12(boost::move(other._m12)) , _m13(boost::move(other._m13)) , _m14(boost::move(other._m14))
        {}
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        BOOST_CONSTEXPR tuple(
            BOOST_FWD_REF(UTuple) other
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<UTuple>::type
                >::value
            >::type* = 0
        ) : _m0(util::get< 0>(boost::forward<UTuple>(other))) , _m1(util::get< 1>(boost::forward<UTuple>(other))) , _m2(util::get< 2>(boost::forward<UTuple>(other))) , _m3(util::get< 3>(boost::forward<UTuple>(other))) , _m4(util::get< 4>(boost::forward<UTuple>(other))) , _m5(util::get< 5>(boost::forward<UTuple>(other))) , _m6(util::get< 6>(boost::forward<UTuple>(other))) , _m7(util::get< 7>(boost::forward<UTuple>(other))) , _m8(util::get< 8>(boost::forward<UTuple>(other))) , _m9(util::get< 9>(boost::forward<UTuple>(other))) , _m10(util::get< 10>(boost::forward<UTuple>(other))) , _m11(util::get< 11>(boost::forward<UTuple>(other))) , _m12(util::get< 12>(boost::forward<UTuple>(other))) , _m13(util::get< 13>(boost::forward<UTuple>(other))) , _m14(util::get< 14>(boost::forward<UTuple>(other)))
        {}
        
        
        
        
        
        tuple& operator=(tuple const& other)
        {
            _m0 = other._m0; _m1 = other._m1; _m2 = other._m2; _m3 = other._m3; _m4 = other._m4; _m5 = other._m5; _m6 = other._m6; _m7 = other._m7; _m8 = other._m8; _m9 = other._m9; _m10 = other._m10; _m11 = other._m11; _m12 = other._m12; _m13 = other._m13; _m14 = other._m14;;
            return *this;
        }
        
        
        
        
        
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            _m0 = boost::move(other._m0); _m1 = boost::move(other._m1); _m2 = boost::move(other._m2); _m3 = boost::move(other._m3); _m4 = boost::move(other._m4); _m5 = boost::move(other._m5); _m6 = boost::move(other._m6); _m7 = boost::move(other._m7); _m8 = boost::move(other._m8); _m9 = boost::move(other._m9); _m10 = boost::move(other._m10); _m11 = boost::move(other._m11); _m12 = boost::move(other._m12); _m13 = boost::move(other._m13); _m14 = boost::move(other._m14);;
            return *this;
        }
        
        
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        typename boost::enable_if_c<
            tuple_size<typename remove_reference<UTuple>::type>::value == 15
          , tuple&
        >::type
        operator=(BOOST_FWD_REF(UTuple) other)
        {
            _m0 = util::get< 0>(boost::forward<UTuple>(other)); _m1 = util::get< 1>(boost::forward<UTuple>(other)); _m2 = util::get< 2>(boost::forward<UTuple>(other)); _m3 = util::get< 3>(boost::forward<UTuple>(other)); _m4 = util::get< 4>(boost::forward<UTuple>(other)); _m5 = util::get< 5>(boost::forward<UTuple>(other)); _m6 = util::get< 6>(boost::forward<UTuple>(other)); _m7 = util::get< 7>(boost::forward<UTuple>(other)); _m8 = util::get< 8>(boost::forward<UTuple>(other)); _m9 = util::get< 9>(boost::forward<UTuple>(other)); _m10 = util::get< 10>(boost::forward<UTuple>(other)); _m11 = util::get< 11>(boost::forward<UTuple>(other)); _m12 = util::get< 12>(boost::forward<UTuple>(other)); _m13 = util::get< 13>(boost::forward<UTuple>(other)); _m14 = util::get< 14>(boost::forward<UTuple>(other));;
            return *this;
        }
        
        
        
        
        
        
        void swap(tuple& other)
            BOOST_NOEXCEPT_IF(true && BOOST_NOEXCEPT_EXPR((boost::swap(_m0._value, other._m0._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m1._value, other._m1._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m2._value, other._m2._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m3._value, other._m3._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m4._value, other._m4._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m5._value, other._m5._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m6._value, other._m6._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m7._value, other._m7._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m8._value, other._m8._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m9._value, other._m9._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m10._value, other._m10._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m11._value, other._m11._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m12._value, other._m12._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m13._value, other._m13._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m14._value, other._m14._value))))
        {
            boost::swap(_m0._value, other._m0._value); boost::swap(_m1._value, other._m1._value); boost::swap(_m2._value, other._m2._value); boost::swap(_m3._value, other._m3._value); boost::swap(_m4._value, other._m4._value); boost::swap(_m5._value, other._m5._value); boost::swap(_m6._value, other._m6._value); boost::swap(_m7._value, other._m7._value); boost::swap(_m8._value, other._m8._value); boost::swap(_m9._value, other._m9._value); boost::swap(_m10._value, other._m10._value); boost::swap(_m11._value, other._m11._value); boost::swap(_m12._value, other._m12._value); boost::swap(_m13._value, other._m13._value); boost::swap(_m14._value, other._m14._value);;
        }
    public: 
        detail::tuple_member<T0> _m0; detail::tuple_member<T1> _m1; detail::tuple_member<T2> _m2; detail::tuple_member<T3> _m3; detail::tuple_member<T4> _m4; detail::tuple_member<T5> _m5; detail::tuple_member<T6> _m6; detail::tuple_member<T7> _m7; detail::tuple_member<T8> _m8; detail::tuple_member<T9> _m9; detail::tuple_member<T10> _m10; detail::tuple_member<T11> _m11; detail::tuple_member<T12> _m12; detail::tuple_member<T13> _m13; detail::tuple_member<T14> _m14;;
    };
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type , typename detail::make_tuple_element<T6>::type , typename detail::make_tuple_element<T7>::type , typename detail::make_tuple_element<T8>::type , typename detail::make_tuple_element<T9>::type , typename detail::make_tuple_element<T10>::type , typename detail::make_tuple_element<T11>::type , typename detail::make_tuple_element<T12>::type , typename detail::make_tuple_element<T13>::type , typename detail::make_tuple_element<T14>::type>
    make_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5 , BOOST_FWD_REF(T6) v6 , BOOST_FWD_REF(T7) v7 , BOOST_FWD_REF(T8) v8 , BOOST_FWD_REF(T9) v9 , BOOST_FWD_REF(T10) v10 , BOOST_FWD_REF(T11) v11 , BOOST_FWD_REF(T12) v12 , BOOST_FWD_REF(T13) v13 , BOOST_FWD_REF(T14) v14)
    {
        return
            tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type , typename detail::make_tuple_element<T6>::type , typename detail::make_tuple_element<T7>::type , typename detail::make_tuple_element<T8>::type , typename detail::make_tuple_element<T9>::type , typename detail::make_tuple_element<T10>::type , typename detail::make_tuple_element<T11>::type , typename detail::make_tuple_element<T12>::type , typename detail::make_tuple_element<T13>::type , typename detail::make_tuple_element<T14>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5) , boost::forward<T6>(v6) , boost::forward<T7>(v7) , boost::forward<T8>(v8) , boost::forward<T9>(v9) , boost::forward<T10>(v10) , boost::forward<T11>(v11) , boost::forward<T12>(v12) , boost::forward<T13>(v13) , boost::forward<T14>(v14)
            );
    }
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14>
    BOOST_FORCEINLINE
    tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type , typename add_rvalue_reference<T6>::type , typename add_rvalue_reference<T7>::type , typename add_rvalue_reference<T8>::type , typename add_rvalue_reference<T9>::type , typename add_rvalue_reference<T10>::type , typename add_rvalue_reference<T11>::type , typename add_rvalue_reference<T12>::type , typename add_rvalue_reference<T13>::type , typename add_rvalue_reference<T14>::type>
    forward_as_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5 , BOOST_FWD_REF(T6) v6 , BOOST_FWD_REF(T7) v7 , BOOST_FWD_REF(T8) v8 , BOOST_FWD_REF(T9) v9 , BOOST_FWD_REF(T10) v10 , BOOST_FWD_REF(T11) v11 , BOOST_FWD_REF(T12) v12 , BOOST_FWD_REF(T13) v13 , BOOST_FWD_REF(T14) v14) BOOST_NOEXCEPT
    {
        return
            tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type , typename add_rvalue_reference<T6>::type , typename add_rvalue_reference<T7>::type , typename add_rvalue_reference<T8>::type , typename add_rvalue_reference<T9>::type , typename add_rvalue_reference<T10>::type , typename add_rvalue_reference<T11>::type , typename add_rvalue_reference<T12>::type , typename add_rvalue_reference<T13>::type , typename add_rvalue_reference<T14>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5) , boost::forward<T6>(v6) , boost::forward<T7>(v7) , boost::forward<T8>(v8) , boost::forward<T9>(v9) , boost::forward<T10>(v10) , boost::forward<T11>(v11) , boost::forward<T12>(v12) , boost::forward<T13>(v13) , boost::forward<T14>(v14)
            );
    }
    
    
    
    
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14>
    BOOST_FORCEINLINE
    tuple<T0& , T1& , T2& , T3& , T4& , T5& , T6& , T7& , T8& , T9& , T10& , T11& , T12& , T13& , T14&>
    tie(T0& v0 , T1& v1 , T2& v2 , T3& v3 , T4& v4 , T5& v5 , T6& v6 , T7& v7 , T8& v8 , T9& v9 , T10& v10 , T11& v11 , T12& v12 , T13& v13 , T14& v14) BOOST_NOEXCEPT
    {
        return
            tuple<T0& , T1& , T2& , T3& , T4& , T5& , T6& , T7& , T8& , T9& , T10& , T11& , T12& , T13& , T14&>(
                v0 , v1 , v2 , v3 , v4 , v5 , v6 , v7 , v8 , v9 , v10 , v11 , v12 , v13 , v14
            );
    }
    
    
    
    
    
    template <typename TTuple, typename UTuple>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename boost::lazy_enable_if_c<
        tuple_size<typename remove_reference<TTuple>::type>::value
      + tuple_size<typename remove_reference<UTuple>::type>::value == 15
      , detail::tuple_cat_result<TTuple, UTuple>
    >::type
    tuple_cat(BOOST_FWD_REF(TTuple) t, BOOST_FWD_REF(UTuple) u)
    {
        return
            typename detail::tuple_cat_result<TTuple, UTuple>::type(
                detail::tuple_cat_element< 0, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 1, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 2, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 3, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 4, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 5, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 6, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 7, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 8, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 9, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 10, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 11, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 12, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 13, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 14, T0, T1>::call(t0, t1)
            );
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename detail::tuple_cat_result<
        T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14
    >::type
    tuple_cat(BOOST_FWD_REF(T0) t0 , BOOST_FWD_REF(T1) t1 , BOOST_FWD_REF(T2) t2 , BOOST_FWD_REF(T3) t3 , BOOST_FWD_REF(T4) t4 , BOOST_FWD_REF(T5) t5 , BOOST_FWD_REF(T6) t6 , BOOST_FWD_REF(T7) t7 , BOOST_FWD_REF(T8) t8 , BOOST_FWD_REF(T9) t9 , BOOST_FWD_REF(T10) t10 , BOOST_FWD_REF(T11) t11 , BOOST_FWD_REF(T12) t12 , BOOST_FWD_REF(T13) t13 , BOOST_FWD_REF(T14) t14)
    {
        return
            util::tuple_cat(
                util::tuple_cat( boost::forward<T0> (t0) , boost::forward<T1> (t1)) , util::tuple_cat( boost::forward<T2> (t2) , boost::forward<T3> (t3)) , util::tuple_cat( boost::forward<T4> (t4) , boost::forward<T5> (t5)) , util::tuple_cat( boost::forward<T6> (t6) , boost::forward<T7> (t7)) , util::tuple_cat( boost::forward<T8> (t8) , boost::forward<T9> (t9)) , util::tuple_cat( boost::forward<T10> (t10) , boost::forward<T11> (t11)) , util::tuple_cat( boost::forward<T12> (t12) , boost::forward<T13> (t13))
              , boost::forward<T14>
                    (t14)
            );
    }
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14>
    struct tuple_size<tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14> >
      : boost::mpl::size_t<15>
    {};
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    struct tuple_element<14, tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19> >
      : boost::mpl::identity<T14>
    {
        template <typename Tuple>
        static BOOST_CONSTEXPR BOOST_FORCEINLINE
        typename detail::qualify_as<T14, Tuple&>::type
        get(Tuple& tuple) BOOST_NOEXCEPT
        {
            return tuple._m14._value;
        }
    };
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15, typename UTuple>
        struct are_tuples_compatible<
            tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15>, UTuple
          , typename boost::enable_if_c<
                tuple_size<typename remove_reference<UTuple>::type>::value == 16
            >::type
        >
        {
            typedef char(&no_type)[1];
            typedef char(&yes_type)[2];
            static no_type call(...);
            static yes_type call(T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15);
            static bool const value =
                sizeof(
                    call(util::get< 0>( boost::declval<UTuple>()) , util::get< 1>( boost::declval<UTuple>()) , util::get< 2>( boost::declval<UTuple>()) , util::get< 3>( boost::declval<UTuple>()) , util::get< 4>( boost::declval<UTuple>()) , util::get< 5>( boost::declval<UTuple>()) , util::get< 6>( boost::declval<UTuple>()) , util::get< 7>( boost::declval<UTuple>()) , util::get< 8>( boost::declval<UTuple>()) , util::get< 9>( boost::declval<UTuple>()) , util::get< 10>( boost::declval<UTuple>()) , util::get< 11>( boost::declval<UTuple>()) , util::get< 12>( boost::declval<UTuple>()) , util::get< 13>( boost::declval<UTuple>()) , util::get< 14>( boost::declval<UTuple>()) , util::get< 15>( boost::declval<UTuple>()))
                ) == sizeof(yes_type);
            typedef boost::mpl::bool_<value> type;
        };
    }
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15>
    class tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15>
    {
    public:
        
        
        
        
        BOOST_CONSTEXPR tuple()
          : _m0() , _m1() , _m2() , _m3() , _m4() , _m5() , _m6() , _m7() , _m8() , _m9() , _m10() , _m11() , _m12() , _m13() , _m14() , _m15()
        {}
        
        
        
        BOOST_CONSTEXPR explicit tuple(
            typename add_lvalue_reference<typename boost::add_const<T0>::type>::type v0 , typename add_lvalue_reference<typename boost::add_const<T1>::type>::type v1 , typename add_lvalue_reference<typename boost::add_const<T2>::type>::type v2 , typename add_lvalue_reference<typename boost::add_const<T3>::type>::type v3 , typename add_lvalue_reference<typename boost::add_const<T4>::type>::type v4 , typename add_lvalue_reference<typename boost::add_const<T5>::type>::type v5 , typename add_lvalue_reference<typename boost::add_const<T6>::type>::type v6 , typename add_lvalue_reference<typename boost::add_const<T7>::type>::type v7 , typename add_lvalue_reference<typename boost::add_const<T8>::type>::type v8 , typename add_lvalue_reference<typename boost::add_const<T9>::type>::type v9 , typename add_lvalue_reference<typename boost::add_const<T10>::type>::type v10 , typename add_lvalue_reference<typename boost::add_const<T11>::type>::type v11 , typename add_lvalue_reference<typename boost::add_const<T12>::type>::type v12 , typename add_lvalue_reference<typename boost::add_const<T13>::type>::type v13 , typename add_lvalue_reference<typename boost::add_const<T14>::type>::type v14 , typename add_lvalue_reference<typename boost::add_const<T15>::type>::type v15
        ) : _m0(v0) , _m1(v1) , _m2(v2) , _m3(v3) , _m4(v4) , _m5(v5) , _m6(v6) , _m7(v7) , _m8(v8) , _m9(v9) , _m10(v10) , _m11(v11) , _m12(v12) , _m13(v13) , _m14(v14) , _m15(v15)
        {}
        
        
        
        
        
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15>
        BOOST_CONSTEXPR explicit tuple(
            BOOST_FWD_REF(U0) u0 , BOOST_FWD_REF(U1) u1 , BOOST_FWD_REF(U2) u2 , BOOST_FWD_REF(U3) u3 , BOOST_FWD_REF(U4) u4 , BOOST_FWD_REF(U5) u5 , BOOST_FWD_REF(U6) u6 , BOOST_FWD_REF(U7) u7 , BOOST_FWD_REF(U8) u8 , BOOST_FWD_REF(U9) u9 , BOOST_FWD_REF(U10) u10 , BOOST_FWD_REF(U11) u11 , BOOST_FWD_REF(U12) u12 , BOOST_FWD_REF(U13) u13 , BOOST_FWD_REF(U14) u14 , BOOST_FWD_REF(U15) u15
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<tuple<U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12 , U13 , U14 , U15> >::type
                >::value
            >::type* = 0
        ) : _m0(boost::forward<U0>(u0)) , _m1(boost::forward<U1>(u1)) , _m2(boost::forward<U2>(u2)) , _m3(boost::forward<U3>(u3)) , _m4(boost::forward<U4>(u4)) , _m5(boost::forward<U5>(u5)) , _m6(boost::forward<U6>(u6)) , _m7(boost::forward<U7>(u7)) , _m8(boost::forward<U8>(u8)) , _m9(boost::forward<U9>(u9)) , _m10(boost::forward<U10>(u10)) , _m11(boost::forward<U11>(u11)) , _m12(boost::forward<U12>(u12)) , _m13(boost::forward<U13>(u13)) , _m14(boost::forward<U14>(u14)) , _m15(boost::forward<U15>(u15))
        {}
        
        
        
        BOOST_CONSTEXPR tuple(tuple const& other)
          : _m0(other._m0) , _m1(other._m1) , _m2(other._m2) , _m3(other._m3) , _m4(other._m4) , _m5(other._m5) , _m6(other._m6) , _m7(other._m7) , _m8(other._m8) , _m9(other._m9) , _m10(other._m10) , _m11(other._m11) , _m12(other._m12) , _m13(other._m13) , _m14(other._m14) , _m15(other._m15)
        {}
        
        
        
        BOOST_CONSTEXPR tuple(BOOST_RV_REF(tuple) other)
          : _m0(boost::move(other._m0)) , _m1(boost::move(other._m1)) , _m2(boost::move(other._m2)) , _m3(boost::move(other._m3)) , _m4(boost::move(other._m4)) , _m5(boost::move(other._m5)) , _m6(boost::move(other._m6)) , _m7(boost::move(other._m7)) , _m8(boost::move(other._m8)) , _m9(boost::move(other._m9)) , _m10(boost::move(other._m10)) , _m11(boost::move(other._m11)) , _m12(boost::move(other._m12)) , _m13(boost::move(other._m13)) , _m14(boost::move(other._m14)) , _m15(boost::move(other._m15))
        {}
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        BOOST_CONSTEXPR tuple(
            BOOST_FWD_REF(UTuple) other
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<UTuple>::type
                >::value
            >::type* = 0
        ) : _m0(util::get< 0>(boost::forward<UTuple>(other))) , _m1(util::get< 1>(boost::forward<UTuple>(other))) , _m2(util::get< 2>(boost::forward<UTuple>(other))) , _m3(util::get< 3>(boost::forward<UTuple>(other))) , _m4(util::get< 4>(boost::forward<UTuple>(other))) , _m5(util::get< 5>(boost::forward<UTuple>(other))) , _m6(util::get< 6>(boost::forward<UTuple>(other))) , _m7(util::get< 7>(boost::forward<UTuple>(other))) , _m8(util::get< 8>(boost::forward<UTuple>(other))) , _m9(util::get< 9>(boost::forward<UTuple>(other))) , _m10(util::get< 10>(boost::forward<UTuple>(other))) , _m11(util::get< 11>(boost::forward<UTuple>(other))) , _m12(util::get< 12>(boost::forward<UTuple>(other))) , _m13(util::get< 13>(boost::forward<UTuple>(other))) , _m14(util::get< 14>(boost::forward<UTuple>(other))) , _m15(util::get< 15>(boost::forward<UTuple>(other)))
        {}
        
        
        
        
        
        tuple& operator=(tuple const& other)
        {
            _m0 = other._m0; _m1 = other._m1; _m2 = other._m2; _m3 = other._m3; _m4 = other._m4; _m5 = other._m5; _m6 = other._m6; _m7 = other._m7; _m8 = other._m8; _m9 = other._m9; _m10 = other._m10; _m11 = other._m11; _m12 = other._m12; _m13 = other._m13; _m14 = other._m14; _m15 = other._m15;;
            return *this;
        }
        
        
        
        
        
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            _m0 = boost::move(other._m0); _m1 = boost::move(other._m1); _m2 = boost::move(other._m2); _m3 = boost::move(other._m3); _m4 = boost::move(other._m4); _m5 = boost::move(other._m5); _m6 = boost::move(other._m6); _m7 = boost::move(other._m7); _m8 = boost::move(other._m8); _m9 = boost::move(other._m9); _m10 = boost::move(other._m10); _m11 = boost::move(other._m11); _m12 = boost::move(other._m12); _m13 = boost::move(other._m13); _m14 = boost::move(other._m14); _m15 = boost::move(other._m15);;
            return *this;
        }
        
        
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        typename boost::enable_if_c<
            tuple_size<typename remove_reference<UTuple>::type>::value == 16
          , tuple&
        >::type
        operator=(BOOST_FWD_REF(UTuple) other)
        {
            _m0 = util::get< 0>(boost::forward<UTuple>(other)); _m1 = util::get< 1>(boost::forward<UTuple>(other)); _m2 = util::get< 2>(boost::forward<UTuple>(other)); _m3 = util::get< 3>(boost::forward<UTuple>(other)); _m4 = util::get< 4>(boost::forward<UTuple>(other)); _m5 = util::get< 5>(boost::forward<UTuple>(other)); _m6 = util::get< 6>(boost::forward<UTuple>(other)); _m7 = util::get< 7>(boost::forward<UTuple>(other)); _m8 = util::get< 8>(boost::forward<UTuple>(other)); _m9 = util::get< 9>(boost::forward<UTuple>(other)); _m10 = util::get< 10>(boost::forward<UTuple>(other)); _m11 = util::get< 11>(boost::forward<UTuple>(other)); _m12 = util::get< 12>(boost::forward<UTuple>(other)); _m13 = util::get< 13>(boost::forward<UTuple>(other)); _m14 = util::get< 14>(boost::forward<UTuple>(other)); _m15 = util::get< 15>(boost::forward<UTuple>(other));;
            return *this;
        }
        
        
        
        
        
        
        void swap(tuple& other)
            BOOST_NOEXCEPT_IF(true && BOOST_NOEXCEPT_EXPR((boost::swap(_m0._value, other._m0._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m1._value, other._m1._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m2._value, other._m2._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m3._value, other._m3._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m4._value, other._m4._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m5._value, other._m5._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m6._value, other._m6._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m7._value, other._m7._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m8._value, other._m8._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m9._value, other._m9._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m10._value, other._m10._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m11._value, other._m11._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m12._value, other._m12._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m13._value, other._m13._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m14._value, other._m14._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m15._value, other._m15._value))))
        {
            boost::swap(_m0._value, other._m0._value); boost::swap(_m1._value, other._m1._value); boost::swap(_m2._value, other._m2._value); boost::swap(_m3._value, other._m3._value); boost::swap(_m4._value, other._m4._value); boost::swap(_m5._value, other._m5._value); boost::swap(_m6._value, other._m6._value); boost::swap(_m7._value, other._m7._value); boost::swap(_m8._value, other._m8._value); boost::swap(_m9._value, other._m9._value); boost::swap(_m10._value, other._m10._value); boost::swap(_m11._value, other._m11._value); boost::swap(_m12._value, other._m12._value); boost::swap(_m13._value, other._m13._value); boost::swap(_m14._value, other._m14._value); boost::swap(_m15._value, other._m15._value);;
        }
    public: 
        detail::tuple_member<T0> _m0; detail::tuple_member<T1> _m1; detail::tuple_member<T2> _m2; detail::tuple_member<T3> _m3; detail::tuple_member<T4> _m4; detail::tuple_member<T5> _m5; detail::tuple_member<T6> _m6; detail::tuple_member<T7> _m7; detail::tuple_member<T8> _m8; detail::tuple_member<T9> _m9; detail::tuple_member<T10> _m10; detail::tuple_member<T11> _m11; detail::tuple_member<T12> _m12; detail::tuple_member<T13> _m13; detail::tuple_member<T14> _m14; detail::tuple_member<T15> _m15;;
    };
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type , typename detail::make_tuple_element<T6>::type , typename detail::make_tuple_element<T7>::type , typename detail::make_tuple_element<T8>::type , typename detail::make_tuple_element<T9>::type , typename detail::make_tuple_element<T10>::type , typename detail::make_tuple_element<T11>::type , typename detail::make_tuple_element<T12>::type , typename detail::make_tuple_element<T13>::type , typename detail::make_tuple_element<T14>::type , typename detail::make_tuple_element<T15>::type>
    make_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5 , BOOST_FWD_REF(T6) v6 , BOOST_FWD_REF(T7) v7 , BOOST_FWD_REF(T8) v8 , BOOST_FWD_REF(T9) v9 , BOOST_FWD_REF(T10) v10 , BOOST_FWD_REF(T11) v11 , BOOST_FWD_REF(T12) v12 , BOOST_FWD_REF(T13) v13 , BOOST_FWD_REF(T14) v14 , BOOST_FWD_REF(T15) v15)
    {
        return
            tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type , typename detail::make_tuple_element<T6>::type , typename detail::make_tuple_element<T7>::type , typename detail::make_tuple_element<T8>::type , typename detail::make_tuple_element<T9>::type , typename detail::make_tuple_element<T10>::type , typename detail::make_tuple_element<T11>::type , typename detail::make_tuple_element<T12>::type , typename detail::make_tuple_element<T13>::type , typename detail::make_tuple_element<T14>::type , typename detail::make_tuple_element<T15>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5) , boost::forward<T6>(v6) , boost::forward<T7>(v7) , boost::forward<T8>(v8) , boost::forward<T9>(v9) , boost::forward<T10>(v10) , boost::forward<T11>(v11) , boost::forward<T12>(v12) , boost::forward<T13>(v13) , boost::forward<T14>(v14) , boost::forward<T15>(v15)
            );
    }
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15>
    BOOST_FORCEINLINE
    tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type , typename add_rvalue_reference<T6>::type , typename add_rvalue_reference<T7>::type , typename add_rvalue_reference<T8>::type , typename add_rvalue_reference<T9>::type , typename add_rvalue_reference<T10>::type , typename add_rvalue_reference<T11>::type , typename add_rvalue_reference<T12>::type , typename add_rvalue_reference<T13>::type , typename add_rvalue_reference<T14>::type , typename add_rvalue_reference<T15>::type>
    forward_as_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5 , BOOST_FWD_REF(T6) v6 , BOOST_FWD_REF(T7) v7 , BOOST_FWD_REF(T8) v8 , BOOST_FWD_REF(T9) v9 , BOOST_FWD_REF(T10) v10 , BOOST_FWD_REF(T11) v11 , BOOST_FWD_REF(T12) v12 , BOOST_FWD_REF(T13) v13 , BOOST_FWD_REF(T14) v14 , BOOST_FWD_REF(T15) v15) BOOST_NOEXCEPT
    {
        return
            tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type , typename add_rvalue_reference<T6>::type , typename add_rvalue_reference<T7>::type , typename add_rvalue_reference<T8>::type , typename add_rvalue_reference<T9>::type , typename add_rvalue_reference<T10>::type , typename add_rvalue_reference<T11>::type , typename add_rvalue_reference<T12>::type , typename add_rvalue_reference<T13>::type , typename add_rvalue_reference<T14>::type , typename add_rvalue_reference<T15>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5) , boost::forward<T6>(v6) , boost::forward<T7>(v7) , boost::forward<T8>(v8) , boost::forward<T9>(v9) , boost::forward<T10>(v10) , boost::forward<T11>(v11) , boost::forward<T12>(v12) , boost::forward<T13>(v13) , boost::forward<T14>(v14) , boost::forward<T15>(v15)
            );
    }
    
    
    
    
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15>
    BOOST_FORCEINLINE
    tuple<T0& , T1& , T2& , T3& , T4& , T5& , T6& , T7& , T8& , T9& , T10& , T11& , T12& , T13& , T14& , T15&>
    tie(T0& v0 , T1& v1 , T2& v2 , T3& v3 , T4& v4 , T5& v5 , T6& v6 , T7& v7 , T8& v8 , T9& v9 , T10& v10 , T11& v11 , T12& v12 , T13& v13 , T14& v14 , T15& v15) BOOST_NOEXCEPT
    {
        return
            tuple<T0& , T1& , T2& , T3& , T4& , T5& , T6& , T7& , T8& , T9& , T10& , T11& , T12& , T13& , T14& , T15&>(
                v0 , v1 , v2 , v3 , v4 , v5 , v6 , v7 , v8 , v9 , v10 , v11 , v12 , v13 , v14 , v15
            );
    }
    
    
    
    
    
    template <typename TTuple, typename UTuple>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename boost::lazy_enable_if_c<
        tuple_size<typename remove_reference<TTuple>::type>::value
      + tuple_size<typename remove_reference<UTuple>::type>::value == 16
      , detail::tuple_cat_result<TTuple, UTuple>
    >::type
    tuple_cat(BOOST_FWD_REF(TTuple) t, BOOST_FWD_REF(UTuple) u)
    {
        return
            typename detail::tuple_cat_result<TTuple, UTuple>::type(
                detail::tuple_cat_element< 0, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 1, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 2, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 3, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 4, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 5, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 6, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 7, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 8, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 9, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 10, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 11, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 12, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 13, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 14, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 15, T0, T1>::call(t0, t1)
            );
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename detail::tuple_cat_result<
        T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15
    >::type
    tuple_cat(BOOST_FWD_REF(T0) t0 , BOOST_FWD_REF(T1) t1 , BOOST_FWD_REF(T2) t2 , BOOST_FWD_REF(T3) t3 , BOOST_FWD_REF(T4) t4 , BOOST_FWD_REF(T5) t5 , BOOST_FWD_REF(T6) t6 , BOOST_FWD_REF(T7) t7 , BOOST_FWD_REF(T8) t8 , BOOST_FWD_REF(T9) t9 , BOOST_FWD_REF(T10) t10 , BOOST_FWD_REF(T11) t11 , BOOST_FWD_REF(T12) t12 , BOOST_FWD_REF(T13) t13 , BOOST_FWD_REF(T14) t14 , BOOST_FWD_REF(T15) t15)
    {
        return
            util::tuple_cat(
                util::tuple_cat( boost::forward<T0> (t0) , boost::forward<T1> (t1)) , util::tuple_cat( boost::forward<T2> (t2) , boost::forward<T3> (t3)) , util::tuple_cat( boost::forward<T4> (t4) , boost::forward<T5> (t5)) , util::tuple_cat( boost::forward<T6> (t6) , boost::forward<T7> (t7)) , util::tuple_cat( boost::forward<T8> (t8) , boost::forward<T9> (t9)) , util::tuple_cat( boost::forward<T10> (t10) , boost::forward<T11> (t11)) , util::tuple_cat( boost::forward<T12> (t12) , boost::forward<T13> (t13)) , util::tuple_cat( boost::forward<T14> (t14) , boost::forward<T15> (t15))
            );
    }
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15>
    struct tuple_size<tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15> >
      : boost::mpl::size_t<16>
    {};
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    struct tuple_element<15, tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19> >
      : boost::mpl::identity<T15>
    {
        template <typename Tuple>
        static BOOST_CONSTEXPR BOOST_FORCEINLINE
        typename detail::qualify_as<T15, Tuple&>::type
        get(Tuple& tuple) BOOST_NOEXCEPT
        {
            return tuple._m15._value;
        }
    };
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16, typename UTuple>
        struct are_tuples_compatible<
            tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16>, UTuple
          , typename boost::enable_if_c<
                tuple_size<typename remove_reference<UTuple>::type>::value == 17
            >::type
        >
        {
            typedef char(&no_type)[1];
            typedef char(&yes_type)[2];
            static no_type call(...);
            static yes_type call(T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16);
            static bool const value =
                sizeof(
                    call(util::get< 0>( boost::declval<UTuple>()) , util::get< 1>( boost::declval<UTuple>()) , util::get< 2>( boost::declval<UTuple>()) , util::get< 3>( boost::declval<UTuple>()) , util::get< 4>( boost::declval<UTuple>()) , util::get< 5>( boost::declval<UTuple>()) , util::get< 6>( boost::declval<UTuple>()) , util::get< 7>( boost::declval<UTuple>()) , util::get< 8>( boost::declval<UTuple>()) , util::get< 9>( boost::declval<UTuple>()) , util::get< 10>( boost::declval<UTuple>()) , util::get< 11>( boost::declval<UTuple>()) , util::get< 12>( boost::declval<UTuple>()) , util::get< 13>( boost::declval<UTuple>()) , util::get< 14>( boost::declval<UTuple>()) , util::get< 15>( boost::declval<UTuple>()) , util::get< 16>( boost::declval<UTuple>()))
                ) == sizeof(yes_type);
            typedef boost::mpl::bool_<value> type;
        };
    }
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16>
    class tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16>
    {
    public:
        
        
        
        
        BOOST_CONSTEXPR tuple()
          : _m0() , _m1() , _m2() , _m3() , _m4() , _m5() , _m6() , _m7() , _m8() , _m9() , _m10() , _m11() , _m12() , _m13() , _m14() , _m15() , _m16()
        {}
        
        
        
        BOOST_CONSTEXPR explicit tuple(
            typename add_lvalue_reference<typename boost::add_const<T0>::type>::type v0 , typename add_lvalue_reference<typename boost::add_const<T1>::type>::type v1 , typename add_lvalue_reference<typename boost::add_const<T2>::type>::type v2 , typename add_lvalue_reference<typename boost::add_const<T3>::type>::type v3 , typename add_lvalue_reference<typename boost::add_const<T4>::type>::type v4 , typename add_lvalue_reference<typename boost::add_const<T5>::type>::type v5 , typename add_lvalue_reference<typename boost::add_const<T6>::type>::type v6 , typename add_lvalue_reference<typename boost::add_const<T7>::type>::type v7 , typename add_lvalue_reference<typename boost::add_const<T8>::type>::type v8 , typename add_lvalue_reference<typename boost::add_const<T9>::type>::type v9 , typename add_lvalue_reference<typename boost::add_const<T10>::type>::type v10 , typename add_lvalue_reference<typename boost::add_const<T11>::type>::type v11 , typename add_lvalue_reference<typename boost::add_const<T12>::type>::type v12 , typename add_lvalue_reference<typename boost::add_const<T13>::type>::type v13 , typename add_lvalue_reference<typename boost::add_const<T14>::type>::type v14 , typename add_lvalue_reference<typename boost::add_const<T15>::type>::type v15 , typename add_lvalue_reference<typename boost::add_const<T16>::type>::type v16
        ) : _m0(v0) , _m1(v1) , _m2(v2) , _m3(v3) , _m4(v4) , _m5(v5) , _m6(v6) , _m7(v7) , _m8(v8) , _m9(v9) , _m10(v10) , _m11(v11) , _m12(v12) , _m13(v13) , _m14(v14) , _m15(v15) , _m16(v16)
        {}
        
        
        
        
        
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16>
        BOOST_CONSTEXPR explicit tuple(
            BOOST_FWD_REF(U0) u0 , BOOST_FWD_REF(U1) u1 , BOOST_FWD_REF(U2) u2 , BOOST_FWD_REF(U3) u3 , BOOST_FWD_REF(U4) u4 , BOOST_FWD_REF(U5) u5 , BOOST_FWD_REF(U6) u6 , BOOST_FWD_REF(U7) u7 , BOOST_FWD_REF(U8) u8 , BOOST_FWD_REF(U9) u9 , BOOST_FWD_REF(U10) u10 , BOOST_FWD_REF(U11) u11 , BOOST_FWD_REF(U12) u12 , BOOST_FWD_REF(U13) u13 , BOOST_FWD_REF(U14) u14 , BOOST_FWD_REF(U15) u15 , BOOST_FWD_REF(U16) u16
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<tuple<U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12 , U13 , U14 , U15 , U16> >::type
                >::value
            >::type* = 0
        ) : _m0(boost::forward<U0>(u0)) , _m1(boost::forward<U1>(u1)) , _m2(boost::forward<U2>(u2)) , _m3(boost::forward<U3>(u3)) , _m4(boost::forward<U4>(u4)) , _m5(boost::forward<U5>(u5)) , _m6(boost::forward<U6>(u6)) , _m7(boost::forward<U7>(u7)) , _m8(boost::forward<U8>(u8)) , _m9(boost::forward<U9>(u9)) , _m10(boost::forward<U10>(u10)) , _m11(boost::forward<U11>(u11)) , _m12(boost::forward<U12>(u12)) , _m13(boost::forward<U13>(u13)) , _m14(boost::forward<U14>(u14)) , _m15(boost::forward<U15>(u15)) , _m16(boost::forward<U16>(u16))
        {}
        
        
        
        BOOST_CONSTEXPR tuple(tuple const& other)
          : _m0(other._m0) , _m1(other._m1) , _m2(other._m2) , _m3(other._m3) , _m4(other._m4) , _m5(other._m5) , _m6(other._m6) , _m7(other._m7) , _m8(other._m8) , _m9(other._m9) , _m10(other._m10) , _m11(other._m11) , _m12(other._m12) , _m13(other._m13) , _m14(other._m14) , _m15(other._m15) , _m16(other._m16)
        {}
        
        
        
        BOOST_CONSTEXPR tuple(BOOST_RV_REF(tuple) other)
          : _m0(boost::move(other._m0)) , _m1(boost::move(other._m1)) , _m2(boost::move(other._m2)) , _m3(boost::move(other._m3)) , _m4(boost::move(other._m4)) , _m5(boost::move(other._m5)) , _m6(boost::move(other._m6)) , _m7(boost::move(other._m7)) , _m8(boost::move(other._m8)) , _m9(boost::move(other._m9)) , _m10(boost::move(other._m10)) , _m11(boost::move(other._m11)) , _m12(boost::move(other._m12)) , _m13(boost::move(other._m13)) , _m14(boost::move(other._m14)) , _m15(boost::move(other._m15)) , _m16(boost::move(other._m16))
        {}
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        BOOST_CONSTEXPR tuple(
            BOOST_FWD_REF(UTuple) other
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<UTuple>::type
                >::value
            >::type* = 0
        ) : _m0(util::get< 0>(boost::forward<UTuple>(other))) , _m1(util::get< 1>(boost::forward<UTuple>(other))) , _m2(util::get< 2>(boost::forward<UTuple>(other))) , _m3(util::get< 3>(boost::forward<UTuple>(other))) , _m4(util::get< 4>(boost::forward<UTuple>(other))) , _m5(util::get< 5>(boost::forward<UTuple>(other))) , _m6(util::get< 6>(boost::forward<UTuple>(other))) , _m7(util::get< 7>(boost::forward<UTuple>(other))) , _m8(util::get< 8>(boost::forward<UTuple>(other))) , _m9(util::get< 9>(boost::forward<UTuple>(other))) , _m10(util::get< 10>(boost::forward<UTuple>(other))) , _m11(util::get< 11>(boost::forward<UTuple>(other))) , _m12(util::get< 12>(boost::forward<UTuple>(other))) , _m13(util::get< 13>(boost::forward<UTuple>(other))) , _m14(util::get< 14>(boost::forward<UTuple>(other))) , _m15(util::get< 15>(boost::forward<UTuple>(other))) , _m16(util::get< 16>(boost::forward<UTuple>(other)))
        {}
        
        
        
        
        
        tuple& operator=(tuple const& other)
        {
            _m0 = other._m0; _m1 = other._m1; _m2 = other._m2; _m3 = other._m3; _m4 = other._m4; _m5 = other._m5; _m6 = other._m6; _m7 = other._m7; _m8 = other._m8; _m9 = other._m9; _m10 = other._m10; _m11 = other._m11; _m12 = other._m12; _m13 = other._m13; _m14 = other._m14; _m15 = other._m15; _m16 = other._m16;;
            return *this;
        }
        
        
        
        
        
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            _m0 = boost::move(other._m0); _m1 = boost::move(other._m1); _m2 = boost::move(other._m2); _m3 = boost::move(other._m3); _m4 = boost::move(other._m4); _m5 = boost::move(other._m5); _m6 = boost::move(other._m6); _m7 = boost::move(other._m7); _m8 = boost::move(other._m8); _m9 = boost::move(other._m9); _m10 = boost::move(other._m10); _m11 = boost::move(other._m11); _m12 = boost::move(other._m12); _m13 = boost::move(other._m13); _m14 = boost::move(other._m14); _m15 = boost::move(other._m15); _m16 = boost::move(other._m16);;
            return *this;
        }
        
        
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        typename boost::enable_if_c<
            tuple_size<typename remove_reference<UTuple>::type>::value == 17
          , tuple&
        >::type
        operator=(BOOST_FWD_REF(UTuple) other)
        {
            _m0 = util::get< 0>(boost::forward<UTuple>(other)); _m1 = util::get< 1>(boost::forward<UTuple>(other)); _m2 = util::get< 2>(boost::forward<UTuple>(other)); _m3 = util::get< 3>(boost::forward<UTuple>(other)); _m4 = util::get< 4>(boost::forward<UTuple>(other)); _m5 = util::get< 5>(boost::forward<UTuple>(other)); _m6 = util::get< 6>(boost::forward<UTuple>(other)); _m7 = util::get< 7>(boost::forward<UTuple>(other)); _m8 = util::get< 8>(boost::forward<UTuple>(other)); _m9 = util::get< 9>(boost::forward<UTuple>(other)); _m10 = util::get< 10>(boost::forward<UTuple>(other)); _m11 = util::get< 11>(boost::forward<UTuple>(other)); _m12 = util::get< 12>(boost::forward<UTuple>(other)); _m13 = util::get< 13>(boost::forward<UTuple>(other)); _m14 = util::get< 14>(boost::forward<UTuple>(other)); _m15 = util::get< 15>(boost::forward<UTuple>(other)); _m16 = util::get< 16>(boost::forward<UTuple>(other));;
            return *this;
        }
        
        
        
        
        
        
        void swap(tuple& other)
            BOOST_NOEXCEPT_IF(true && BOOST_NOEXCEPT_EXPR((boost::swap(_m0._value, other._m0._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m1._value, other._m1._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m2._value, other._m2._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m3._value, other._m3._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m4._value, other._m4._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m5._value, other._m5._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m6._value, other._m6._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m7._value, other._m7._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m8._value, other._m8._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m9._value, other._m9._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m10._value, other._m10._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m11._value, other._m11._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m12._value, other._m12._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m13._value, other._m13._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m14._value, other._m14._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m15._value, other._m15._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m16._value, other._m16._value))))
        {
            boost::swap(_m0._value, other._m0._value); boost::swap(_m1._value, other._m1._value); boost::swap(_m2._value, other._m2._value); boost::swap(_m3._value, other._m3._value); boost::swap(_m4._value, other._m4._value); boost::swap(_m5._value, other._m5._value); boost::swap(_m6._value, other._m6._value); boost::swap(_m7._value, other._m7._value); boost::swap(_m8._value, other._m8._value); boost::swap(_m9._value, other._m9._value); boost::swap(_m10._value, other._m10._value); boost::swap(_m11._value, other._m11._value); boost::swap(_m12._value, other._m12._value); boost::swap(_m13._value, other._m13._value); boost::swap(_m14._value, other._m14._value); boost::swap(_m15._value, other._m15._value); boost::swap(_m16._value, other._m16._value);;
        }
    public: 
        detail::tuple_member<T0> _m0; detail::tuple_member<T1> _m1; detail::tuple_member<T2> _m2; detail::tuple_member<T3> _m3; detail::tuple_member<T4> _m4; detail::tuple_member<T5> _m5; detail::tuple_member<T6> _m6; detail::tuple_member<T7> _m7; detail::tuple_member<T8> _m8; detail::tuple_member<T9> _m9; detail::tuple_member<T10> _m10; detail::tuple_member<T11> _m11; detail::tuple_member<T12> _m12; detail::tuple_member<T13> _m13; detail::tuple_member<T14> _m14; detail::tuple_member<T15> _m15; detail::tuple_member<T16> _m16;;
    };
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type , typename detail::make_tuple_element<T6>::type , typename detail::make_tuple_element<T7>::type , typename detail::make_tuple_element<T8>::type , typename detail::make_tuple_element<T9>::type , typename detail::make_tuple_element<T10>::type , typename detail::make_tuple_element<T11>::type , typename detail::make_tuple_element<T12>::type , typename detail::make_tuple_element<T13>::type , typename detail::make_tuple_element<T14>::type , typename detail::make_tuple_element<T15>::type , typename detail::make_tuple_element<T16>::type>
    make_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5 , BOOST_FWD_REF(T6) v6 , BOOST_FWD_REF(T7) v7 , BOOST_FWD_REF(T8) v8 , BOOST_FWD_REF(T9) v9 , BOOST_FWD_REF(T10) v10 , BOOST_FWD_REF(T11) v11 , BOOST_FWD_REF(T12) v12 , BOOST_FWD_REF(T13) v13 , BOOST_FWD_REF(T14) v14 , BOOST_FWD_REF(T15) v15 , BOOST_FWD_REF(T16) v16)
    {
        return
            tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type , typename detail::make_tuple_element<T6>::type , typename detail::make_tuple_element<T7>::type , typename detail::make_tuple_element<T8>::type , typename detail::make_tuple_element<T9>::type , typename detail::make_tuple_element<T10>::type , typename detail::make_tuple_element<T11>::type , typename detail::make_tuple_element<T12>::type , typename detail::make_tuple_element<T13>::type , typename detail::make_tuple_element<T14>::type , typename detail::make_tuple_element<T15>::type , typename detail::make_tuple_element<T16>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5) , boost::forward<T6>(v6) , boost::forward<T7>(v7) , boost::forward<T8>(v8) , boost::forward<T9>(v9) , boost::forward<T10>(v10) , boost::forward<T11>(v11) , boost::forward<T12>(v12) , boost::forward<T13>(v13) , boost::forward<T14>(v14) , boost::forward<T15>(v15) , boost::forward<T16>(v16)
            );
    }
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16>
    BOOST_FORCEINLINE
    tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type , typename add_rvalue_reference<T6>::type , typename add_rvalue_reference<T7>::type , typename add_rvalue_reference<T8>::type , typename add_rvalue_reference<T9>::type , typename add_rvalue_reference<T10>::type , typename add_rvalue_reference<T11>::type , typename add_rvalue_reference<T12>::type , typename add_rvalue_reference<T13>::type , typename add_rvalue_reference<T14>::type , typename add_rvalue_reference<T15>::type , typename add_rvalue_reference<T16>::type>
    forward_as_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5 , BOOST_FWD_REF(T6) v6 , BOOST_FWD_REF(T7) v7 , BOOST_FWD_REF(T8) v8 , BOOST_FWD_REF(T9) v9 , BOOST_FWD_REF(T10) v10 , BOOST_FWD_REF(T11) v11 , BOOST_FWD_REF(T12) v12 , BOOST_FWD_REF(T13) v13 , BOOST_FWD_REF(T14) v14 , BOOST_FWD_REF(T15) v15 , BOOST_FWD_REF(T16) v16) BOOST_NOEXCEPT
    {
        return
            tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type , typename add_rvalue_reference<T6>::type , typename add_rvalue_reference<T7>::type , typename add_rvalue_reference<T8>::type , typename add_rvalue_reference<T9>::type , typename add_rvalue_reference<T10>::type , typename add_rvalue_reference<T11>::type , typename add_rvalue_reference<T12>::type , typename add_rvalue_reference<T13>::type , typename add_rvalue_reference<T14>::type , typename add_rvalue_reference<T15>::type , typename add_rvalue_reference<T16>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5) , boost::forward<T6>(v6) , boost::forward<T7>(v7) , boost::forward<T8>(v8) , boost::forward<T9>(v9) , boost::forward<T10>(v10) , boost::forward<T11>(v11) , boost::forward<T12>(v12) , boost::forward<T13>(v13) , boost::forward<T14>(v14) , boost::forward<T15>(v15) , boost::forward<T16>(v16)
            );
    }
    
    
    
    
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16>
    BOOST_FORCEINLINE
    tuple<T0& , T1& , T2& , T3& , T4& , T5& , T6& , T7& , T8& , T9& , T10& , T11& , T12& , T13& , T14& , T15& , T16&>
    tie(T0& v0 , T1& v1 , T2& v2 , T3& v3 , T4& v4 , T5& v5 , T6& v6 , T7& v7 , T8& v8 , T9& v9 , T10& v10 , T11& v11 , T12& v12 , T13& v13 , T14& v14 , T15& v15 , T16& v16) BOOST_NOEXCEPT
    {
        return
            tuple<T0& , T1& , T2& , T3& , T4& , T5& , T6& , T7& , T8& , T9& , T10& , T11& , T12& , T13& , T14& , T15& , T16&>(
                v0 , v1 , v2 , v3 , v4 , v5 , v6 , v7 , v8 , v9 , v10 , v11 , v12 , v13 , v14 , v15 , v16
            );
    }
    
    
    
    
    
    template <typename TTuple, typename UTuple>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename boost::lazy_enable_if_c<
        tuple_size<typename remove_reference<TTuple>::type>::value
      + tuple_size<typename remove_reference<UTuple>::type>::value == 17
      , detail::tuple_cat_result<TTuple, UTuple>
    >::type
    tuple_cat(BOOST_FWD_REF(TTuple) t, BOOST_FWD_REF(UTuple) u)
    {
        return
            typename detail::tuple_cat_result<TTuple, UTuple>::type(
                detail::tuple_cat_element< 0, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 1, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 2, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 3, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 4, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 5, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 6, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 7, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 8, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 9, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 10, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 11, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 12, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 13, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 14, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 15, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 16, T0, T1>::call(t0, t1)
            );
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename detail::tuple_cat_result<
        T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16
    >::type
    tuple_cat(BOOST_FWD_REF(T0) t0 , BOOST_FWD_REF(T1) t1 , BOOST_FWD_REF(T2) t2 , BOOST_FWD_REF(T3) t3 , BOOST_FWD_REF(T4) t4 , BOOST_FWD_REF(T5) t5 , BOOST_FWD_REF(T6) t6 , BOOST_FWD_REF(T7) t7 , BOOST_FWD_REF(T8) t8 , BOOST_FWD_REF(T9) t9 , BOOST_FWD_REF(T10) t10 , BOOST_FWD_REF(T11) t11 , BOOST_FWD_REF(T12) t12 , BOOST_FWD_REF(T13) t13 , BOOST_FWD_REF(T14) t14 , BOOST_FWD_REF(T15) t15 , BOOST_FWD_REF(T16) t16)
    {
        return
            util::tuple_cat(
                util::tuple_cat( boost::forward<T0> (t0) , boost::forward<T1> (t1)) , util::tuple_cat( boost::forward<T2> (t2) , boost::forward<T3> (t3)) , util::tuple_cat( boost::forward<T4> (t4) , boost::forward<T5> (t5)) , util::tuple_cat( boost::forward<T6> (t6) , boost::forward<T7> (t7)) , util::tuple_cat( boost::forward<T8> (t8) , boost::forward<T9> (t9)) , util::tuple_cat( boost::forward<T10> (t10) , boost::forward<T11> (t11)) , util::tuple_cat( boost::forward<T12> (t12) , boost::forward<T13> (t13)) , util::tuple_cat( boost::forward<T14> (t14) , boost::forward<T15> (t15))
              , boost::forward<T16>
                    (t16)
            );
    }
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16>
    struct tuple_size<tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16> >
      : boost::mpl::size_t<17>
    {};
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    struct tuple_element<16, tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19> >
      : boost::mpl::identity<T16>
    {
        template <typename Tuple>
        static BOOST_CONSTEXPR BOOST_FORCEINLINE
        typename detail::qualify_as<T16, Tuple&>::type
        get(Tuple& tuple) BOOST_NOEXCEPT
        {
            return tuple._m16._value;
        }
    };
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17, typename UTuple>
        struct are_tuples_compatible<
            tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17>, UTuple
          , typename boost::enable_if_c<
                tuple_size<typename remove_reference<UTuple>::type>::value == 18
            >::type
        >
        {
            typedef char(&no_type)[1];
            typedef char(&yes_type)[2];
            static no_type call(...);
            static yes_type call(T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17);
            static bool const value =
                sizeof(
                    call(util::get< 0>( boost::declval<UTuple>()) , util::get< 1>( boost::declval<UTuple>()) , util::get< 2>( boost::declval<UTuple>()) , util::get< 3>( boost::declval<UTuple>()) , util::get< 4>( boost::declval<UTuple>()) , util::get< 5>( boost::declval<UTuple>()) , util::get< 6>( boost::declval<UTuple>()) , util::get< 7>( boost::declval<UTuple>()) , util::get< 8>( boost::declval<UTuple>()) , util::get< 9>( boost::declval<UTuple>()) , util::get< 10>( boost::declval<UTuple>()) , util::get< 11>( boost::declval<UTuple>()) , util::get< 12>( boost::declval<UTuple>()) , util::get< 13>( boost::declval<UTuple>()) , util::get< 14>( boost::declval<UTuple>()) , util::get< 15>( boost::declval<UTuple>()) , util::get< 16>( boost::declval<UTuple>()) , util::get< 17>( boost::declval<UTuple>()))
                ) == sizeof(yes_type);
            typedef boost::mpl::bool_<value> type;
        };
    }
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17>
    class tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17>
    {
    public:
        
        
        
        
        BOOST_CONSTEXPR tuple()
          : _m0() , _m1() , _m2() , _m3() , _m4() , _m5() , _m6() , _m7() , _m8() , _m9() , _m10() , _m11() , _m12() , _m13() , _m14() , _m15() , _m16() , _m17()
        {}
        
        
        
        BOOST_CONSTEXPR explicit tuple(
            typename add_lvalue_reference<typename boost::add_const<T0>::type>::type v0 , typename add_lvalue_reference<typename boost::add_const<T1>::type>::type v1 , typename add_lvalue_reference<typename boost::add_const<T2>::type>::type v2 , typename add_lvalue_reference<typename boost::add_const<T3>::type>::type v3 , typename add_lvalue_reference<typename boost::add_const<T4>::type>::type v4 , typename add_lvalue_reference<typename boost::add_const<T5>::type>::type v5 , typename add_lvalue_reference<typename boost::add_const<T6>::type>::type v6 , typename add_lvalue_reference<typename boost::add_const<T7>::type>::type v7 , typename add_lvalue_reference<typename boost::add_const<T8>::type>::type v8 , typename add_lvalue_reference<typename boost::add_const<T9>::type>::type v9 , typename add_lvalue_reference<typename boost::add_const<T10>::type>::type v10 , typename add_lvalue_reference<typename boost::add_const<T11>::type>::type v11 , typename add_lvalue_reference<typename boost::add_const<T12>::type>::type v12 , typename add_lvalue_reference<typename boost::add_const<T13>::type>::type v13 , typename add_lvalue_reference<typename boost::add_const<T14>::type>::type v14 , typename add_lvalue_reference<typename boost::add_const<T15>::type>::type v15 , typename add_lvalue_reference<typename boost::add_const<T16>::type>::type v16 , typename add_lvalue_reference<typename boost::add_const<T17>::type>::type v17
        ) : _m0(v0) , _m1(v1) , _m2(v2) , _m3(v3) , _m4(v4) , _m5(v5) , _m6(v6) , _m7(v7) , _m8(v8) , _m9(v9) , _m10(v10) , _m11(v11) , _m12(v12) , _m13(v13) , _m14(v14) , _m15(v15) , _m16(v16) , _m17(v17)
        {}
        
        
        
        
        
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17>
        BOOST_CONSTEXPR explicit tuple(
            BOOST_FWD_REF(U0) u0 , BOOST_FWD_REF(U1) u1 , BOOST_FWD_REF(U2) u2 , BOOST_FWD_REF(U3) u3 , BOOST_FWD_REF(U4) u4 , BOOST_FWD_REF(U5) u5 , BOOST_FWD_REF(U6) u6 , BOOST_FWD_REF(U7) u7 , BOOST_FWD_REF(U8) u8 , BOOST_FWD_REF(U9) u9 , BOOST_FWD_REF(U10) u10 , BOOST_FWD_REF(U11) u11 , BOOST_FWD_REF(U12) u12 , BOOST_FWD_REF(U13) u13 , BOOST_FWD_REF(U14) u14 , BOOST_FWD_REF(U15) u15 , BOOST_FWD_REF(U16) u16 , BOOST_FWD_REF(U17) u17
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<tuple<U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12 , U13 , U14 , U15 , U16 , U17> >::type
                >::value
            >::type* = 0
        ) : _m0(boost::forward<U0>(u0)) , _m1(boost::forward<U1>(u1)) , _m2(boost::forward<U2>(u2)) , _m3(boost::forward<U3>(u3)) , _m4(boost::forward<U4>(u4)) , _m5(boost::forward<U5>(u5)) , _m6(boost::forward<U6>(u6)) , _m7(boost::forward<U7>(u7)) , _m8(boost::forward<U8>(u8)) , _m9(boost::forward<U9>(u9)) , _m10(boost::forward<U10>(u10)) , _m11(boost::forward<U11>(u11)) , _m12(boost::forward<U12>(u12)) , _m13(boost::forward<U13>(u13)) , _m14(boost::forward<U14>(u14)) , _m15(boost::forward<U15>(u15)) , _m16(boost::forward<U16>(u16)) , _m17(boost::forward<U17>(u17))
        {}
        
        
        
        BOOST_CONSTEXPR tuple(tuple const& other)
          : _m0(other._m0) , _m1(other._m1) , _m2(other._m2) , _m3(other._m3) , _m4(other._m4) , _m5(other._m5) , _m6(other._m6) , _m7(other._m7) , _m8(other._m8) , _m9(other._m9) , _m10(other._m10) , _m11(other._m11) , _m12(other._m12) , _m13(other._m13) , _m14(other._m14) , _m15(other._m15) , _m16(other._m16) , _m17(other._m17)
        {}
        
        
        
        BOOST_CONSTEXPR tuple(BOOST_RV_REF(tuple) other)
          : _m0(boost::move(other._m0)) , _m1(boost::move(other._m1)) , _m2(boost::move(other._m2)) , _m3(boost::move(other._m3)) , _m4(boost::move(other._m4)) , _m5(boost::move(other._m5)) , _m6(boost::move(other._m6)) , _m7(boost::move(other._m7)) , _m8(boost::move(other._m8)) , _m9(boost::move(other._m9)) , _m10(boost::move(other._m10)) , _m11(boost::move(other._m11)) , _m12(boost::move(other._m12)) , _m13(boost::move(other._m13)) , _m14(boost::move(other._m14)) , _m15(boost::move(other._m15)) , _m16(boost::move(other._m16)) , _m17(boost::move(other._m17))
        {}
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        BOOST_CONSTEXPR tuple(
            BOOST_FWD_REF(UTuple) other
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<UTuple>::type
                >::value
            >::type* = 0
        ) : _m0(util::get< 0>(boost::forward<UTuple>(other))) , _m1(util::get< 1>(boost::forward<UTuple>(other))) , _m2(util::get< 2>(boost::forward<UTuple>(other))) , _m3(util::get< 3>(boost::forward<UTuple>(other))) , _m4(util::get< 4>(boost::forward<UTuple>(other))) , _m5(util::get< 5>(boost::forward<UTuple>(other))) , _m6(util::get< 6>(boost::forward<UTuple>(other))) , _m7(util::get< 7>(boost::forward<UTuple>(other))) , _m8(util::get< 8>(boost::forward<UTuple>(other))) , _m9(util::get< 9>(boost::forward<UTuple>(other))) , _m10(util::get< 10>(boost::forward<UTuple>(other))) , _m11(util::get< 11>(boost::forward<UTuple>(other))) , _m12(util::get< 12>(boost::forward<UTuple>(other))) , _m13(util::get< 13>(boost::forward<UTuple>(other))) , _m14(util::get< 14>(boost::forward<UTuple>(other))) , _m15(util::get< 15>(boost::forward<UTuple>(other))) , _m16(util::get< 16>(boost::forward<UTuple>(other))) , _m17(util::get< 17>(boost::forward<UTuple>(other)))
        {}
        
        
        
        
        
        tuple& operator=(tuple const& other)
        {
            _m0 = other._m0; _m1 = other._m1; _m2 = other._m2; _m3 = other._m3; _m4 = other._m4; _m5 = other._m5; _m6 = other._m6; _m7 = other._m7; _m8 = other._m8; _m9 = other._m9; _m10 = other._m10; _m11 = other._m11; _m12 = other._m12; _m13 = other._m13; _m14 = other._m14; _m15 = other._m15; _m16 = other._m16; _m17 = other._m17;;
            return *this;
        }
        
        
        
        
        
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            _m0 = boost::move(other._m0); _m1 = boost::move(other._m1); _m2 = boost::move(other._m2); _m3 = boost::move(other._m3); _m4 = boost::move(other._m4); _m5 = boost::move(other._m5); _m6 = boost::move(other._m6); _m7 = boost::move(other._m7); _m8 = boost::move(other._m8); _m9 = boost::move(other._m9); _m10 = boost::move(other._m10); _m11 = boost::move(other._m11); _m12 = boost::move(other._m12); _m13 = boost::move(other._m13); _m14 = boost::move(other._m14); _m15 = boost::move(other._m15); _m16 = boost::move(other._m16); _m17 = boost::move(other._m17);;
            return *this;
        }
        
        
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        typename boost::enable_if_c<
            tuple_size<typename remove_reference<UTuple>::type>::value == 18
          , tuple&
        >::type
        operator=(BOOST_FWD_REF(UTuple) other)
        {
            _m0 = util::get< 0>(boost::forward<UTuple>(other)); _m1 = util::get< 1>(boost::forward<UTuple>(other)); _m2 = util::get< 2>(boost::forward<UTuple>(other)); _m3 = util::get< 3>(boost::forward<UTuple>(other)); _m4 = util::get< 4>(boost::forward<UTuple>(other)); _m5 = util::get< 5>(boost::forward<UTuple>(other)); _m6 = util::get< 6>(boost::forward<UTuple>(other)); _m7 = util::get< 7>(boost::forward<UTuple>(other)); _m8 = util::get< 8>(boost::forward<UTuple>(other)); _m9 = util::get< 9>(boost::forward<UTuple>(other)); _m10 = util::get< 10>(boost::forward<UTuple>(other)); _m11 = util::get< 11>(boost::forward<UTuple>(other)); _m12 = util::get< 12>(boost::forward<UTuple>(other)); _m13 = util::get< 13>(boost::forward<UTuple>(other)); _m14 = util::get< 14>(boost::forward<UTuple>(other)); _m15 = util::get< 15>(boost::forward<UTuple>(other)); _m16 = util::get< 16>(boost::forward<UTuple>(other)); _m17 = util::get< 17>(boost::forward<UTuple>(other));;
            return *this;
        }
        
        
        
        
        
        
        void swap(tuple& other)
            BOOST_NOEXCEPT_IF(true && BOOST_NOEXCEPT_EXPR((boost::swap(_m0._value, other._m0._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m1._value, other._m1._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m2._value, other._m2._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m3._value, other._m3._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m4._value, other._m4._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m5._value, other._m5._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m6._value, other._m6._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m7._value, other._m7._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m8._value, other._m8._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m9._value, other._m9._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m10._value, other._m10._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m11._value, other._m11._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m12._value, other._m12._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m13._value, other._m13._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m14._value, other._m14._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m15._value, other._m15._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m16._value, other._m16._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m17._value, other._m17._value))))
        {
            boost::swap(_m0._value, other._m0._value); boost::swap(_m1._value, other._m1._value); boost::swap(_m2._value, other._m2._value); boost::swap(_m3._value, other._m3._value); boost::swap(_m4._value, other._m4._value); boost::swap(_m5._value, other._m5._value); boost::swap(_m6._value, other._m6._value); boost::swap(_m7._value, other._m7._value); boost::swap(_m8._value, other._m8._value); boost::swap(_m9._value, other._m9._value); boost::swap(_m10._value, other._m10._value); boost::swap(_m11._value, other._m11._value); boost::swap(_m12._value, other._m12._value); boost::swap(_m13._value, other._m13._value); boost::swap(_m14._value, other._m14._value); boost::swap(_m15._value, other._m15._value); boost::swap(_m16._value, other._m16._value); boost::swap(_m17._value, other._m17._value);;
        }
    public: 
        detail::tuple_member<T0> _m0; detail::tuple_member<T1> _m1; detail::tuple_member<T2> _m2; detail::tuple_member<T3> _m3; detail::tuple_member<T4> _m4; detail::tuple_member<T5> _m5; detail::tuple_member<T6> _m6; detail::tuple_member<T7> _m7; detail::tuple_member<T8> _m8; detail::tuple_member<T9> _m9; detail::tuple_member<T10> _m10; detail::tuple_member<T11> _m11; detail::tuple_member<T12> _m12; detail::tuple_member<T13> _m13; detail::tuple_member<T14> _m14; detail::tuple_member<T15> _m15; detail::tuple_member<T16> _m16; detail::tuple_member<T17> _m17;;
    };
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type , typename detail::make_tuple_element<T6>::type , typename detail::make_tuple_element<T7>::type , typename detail::make_tuple_element<T8>::type , typename detail::make_tuple_element<T9>::type , typename detail::make_tuple_element<T10>::type , typename detail::make_tuple_element<T11>::type , typename detail::make_tuple_element<T12>::type , typename detail::make_tuple_element<T13>::type , typename detail::make_tuple_element<T14>::type , typename detail::make_tuple_element<T15>::type , typename detail::make_tuple_element<T16>::type , typename detail::make_tuple_element<T17>::type>
    make_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5 , BOOST_FWD_REF(T6) v6 , BOOST_FWD_REF(T7) v7 , BOOST_FWD_REF(T8) v8 , BOOST_FWD_REF(T9) v9 , BOOST_FWD_REF(T10) v10 , BOOST_FWD_REF(T11) v11 , BOOST_FWD_REF(T12) v12 , BOOST_FWD_REF(T13) v13 , BOOST_FWD_REF(T14) v14 , BOOST_FWD_REF(T15) v15 , BOOST_FWD_REF(T16) v16 , BOOST_FWD_REF(T17) v17)
    {
        return
            tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type , typename detail::make_tuple_element<T6>::type , typename detail::make_tuple_element<T7>::type , typename detail::make_tuple_element<T8>::type , typename detail::make_tuple_element<T9>::type , typename detail::make_tuple_element<T10>::type , typename detail::make_tuple_element<T11>::type , typename detail::make_tuple_element<T12>::type , typename detail::make_tuple_element<T13>::type , typename detail::make_tuple_element<T14>::type , typename detail::make_tuple_element<T15>::type , typename detail::make_tuple_element<T16>::type , typename detail::make_tuple_element<T17>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5) , boost::forward<T6>(v6) , boost::forward<T7>(v7) , boost::forward<T8>(v8) , boost::forward<T9>(v9) , boost::forward<T10>(v10) , boost::forward<T11>(v11) , boost::forward<T12>(v12) , boost::forward<T13>(v13) , boost::forward<T14>(v14) , boost::forward<T15>(v15) , boost::forward<T16>(v16) , boost::forward<T17>(v17)
            );
    }
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17>
    BOOST_FORCEINLINE
    tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type , typename add_rvalue_reference<T6>::type , typename add_rvalue_reference<T7>::type , typename add_rvalue_reference<T8>::type , typename add_rvalue_reference<T9>::type , typename add_rvalue_reference<T10>::type , typename add_rvalue_reference<T11>::type , typename add_rvalue_reference<T12>::type , typename add_rvalue_reference<T13>::type , typename add_rvalue_reference<T14>::type , typename add_rvalue_reference<T15>::type , typename add_rvalue_reference<T16>::type , typename add_rvalue_reference<T17>::type>
    forward_as_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5 , BOOST_FWD_REF(T6) v6 , BOOST_FWD_REF(T7) v7 , BOOST_FWD_REF(T8) v8 , BOOST_FWD_REF(T9) v9 , BOOST_FWD_REF(T10) v10 , BOOST_FWD_REF(T11) v11 , BOOST_FWD_REF(T12) v12 , BOOST_FWD_REF(T13) v13 , BOOST_FWD_REF(T14) v14 , BOOST_FWD_REF(T15) v15 , BOOST_FWD_REF(T16) v16 , BOOST_FWD_REF(T17) v17) BOOST_NOEXCEPT
    {
        return
            tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type , typename add_rvalue_reference<T6>::type , typename add_rvalue_reference<T7>::type , typename add_rvalue_reference<T8>::type , typename add_rvalue_reference<T9>::type , typename add_rvalue_reference<T10>::type , typename add_rvalue_reference<T11>::type , typename add_rvalue_reference<T12>::type , typename add_rvalue_reference<T13>::type , typename add_rvalue_reference<T14>::type , typename add_rvalue_reference<T15>::type , typename add_rvalue_reference<T16>::type , typename add_rvalue_reference<T17>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5) , boost::forward<T6>(v6) , boost::forward<T7>(v7) , boost::forward<T8>(v8) , boost::forward<T9>(v9) , boost::forward<T10>(v10) , boost::forward<T11>(v11) , boost::forward<T12>(v12) , boost::forward<T13>(v13) , boost::forward<T14>(v14) , boost::forward<T15>(v15) , boost::forward<T16>(v16) , boost::forward<T17>(v17)
            );
    }
    
    
    
    
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17>
    BOOST_FORCEINLINE
    tuple<T0& , T1& , T2& , T3& , T4& , T5& , T6& , T7& , T8& , T9& , T10& , T11& , T12& , T13& , T14& , T15& , T16& , T17&>
    tie(T0& v0 , T1& v1 , T2& v2 , T3& v3 , T4& v4 , T5& v5 , T6& v6 , T7& v7 , T8& v8 , T9& v9 , T10& v10 , T11& v11 , T12& v12 , T13& v13 , T14& v14 , T15& v15 , T16& v16 , T17& v17) BOOST_NOEXCEPT
    {
        return
            tuple<T0& , T1& , T2& , T3& , T4& , T5& , T6& , T7& , T8& , T9& , T10& , T11& , T12& , T13& , T14& , T15& , T16& , T17&>(
                v0 , v1 , v2 , v3 , v4 , v5 , v6 , v7 , v8 , v9 , v10 , v11 , v12 , v13 , v14 , v15 , v16 , v17
            );
    }
    
    
    
    
    
    template <typename TTuple, typename UTuple>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename boost::lazy_enable_if_c<
        tuple_size<typename remove_reference<TTuple>::type>::value
      + tuple_size<typename remove_reference<UTuple>::type>::value == 18
      , detail::tuple_cat_result<TTuple, UTuple>
    >::type
    tuple_cat(BOOST_FWD_REF(TTuple) t, BOOST_FWD_REF(UTuple) u)
    {
        return
            typename detail::tuple_cat_result<TTuple, UTuple>::type(
                detail::tuple_cat_element< 0, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 1, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 2, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 3, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 4, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 5, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 6, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 7, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 8, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 9, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 10, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 11, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 12, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 13, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 14, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 15, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 16, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 17, T0, T1>::call(t0, t1)
            );
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename detail::tuple_cat_result<
        T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17
    >::type
    tuple_cat(BOOST_FWD_REF(T0) t0 , BOOST_FWD_REF(T1) t1 , BOOST_FWD_REF(T2) t2 , BOOST_FWD_REF(T3) t3 , BOOST_FWD_REF(T4) t4 , BOOST_FWD_REF(T5) t5 , BOOST_FWD_REF(T6) t6 , BOOST_FWD_REF(T7) t7 , BOOST_FWD_REF(T8) t8 , BOOST_FWD_REF(T9) t9 , BOOST_FWD_REF(T10) t10 , BOOST_FWD_REF(T11) t11 , BOOST_FWD_REF(T12) t12 , BOOST_FWD_REF(T13) t13 , BOOST_FWD_REF(T14) t14 , BOOST_FWD_REF(T15) t15 , BOOST_FWD_REF(T16) t16 , BOOST_FWD_REF(T17) t17)
    {
        return
            util::tuple_cat(
                util::tuple_cat( boost::forward<T0> (t0) , boost::forward<T1> (t1)) , util::tuple_cat( boost::forward<T2> (t2) , boost::forward<T3> (t3)) , util::tuple_cat( boost::forward<T4> (t4) , boost::forward<T5> (t5)) , util::tuple_cat( boost::forward<T6> (t6) , boost::forward<T7> (t7)) , util::tuple_cat( boost::forward<T8> (t8) , boost::forward<T9> (t9)) , util::tuple_cat( boost::forward<T10> (t10) , boost::forward<T11> (t11)) , util::tuple_cat( boost::forward<T12> (t12) , boost::forward<T13> (t13)) , util::tuple_cat( boost::forward<T14> (t14) , boost::forward<T15> (t15)) , util::tuple_cat( boost::forward<T16> (t16) , boost::forward<T17> (t17))
            );
    }
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17>
    struct tuple_size<tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17> >
      : boost::mpl::size_t<18>
    {};
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    struct tuple_element<17, tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19> >
      : boost::mpl::identity<T17>
    {
        template <typename Tuple>
        static BOOST_CONSTEXPR BOOST_FORCEINLINE
        typename detail::qualify_as<T17, Tuple&>::type
        get(Tuple& tuple) BOOST_NOEXCEPT
        {
            return tuple._m17._value;
        }
    };
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18, typename UTuple>
        struct are_tuples_compatible<
            tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18>, UTuple
          , typename boost::enable_if_c<
                tuple_size<typename remove_reference<UTuple>::type>::value == 19
            >::type
        >
        {
            typedef char(&no_type)[1];
            typedef char(&yes_type)[2];
            static no_type call(...);
            static yes_type call(T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18);
            static bool const value =
                sizeof(
                    call(util::get< 0>( boost::declval<UTuple>()) , util::get< 1>( boost::declval<UTuple>()) , util::get< 2>( boost::declval<UTuple>()) , util::get< 3>( boost::declval<UTuple>()) , util::get< 4>( boost::declval<UTuple>()) , util::get< 5>( boost::declval<UTuple>()) , util::get< 6>( boost::declval<UTuple>()) , util::get< 7>( boost::declval<UTuple>()) , util::get< 8>( boost::declval<UTuple>()) , util::get< 9>( boost::declval<UTuple>()) , util::get< 10>( boost::declval<UTuple>()) , util::get< 11>( boost::declval<UTuple>()) , util::get< 12>( boost::declval<UTuple>()) , util::get< 13>( boost::declval<UTuple>()) , util::get< 14>( boost::declval<UTuple>()) , util::get< 15>( boost::declval<UTuple>()) , util::get< 16>( boost::declval<UTuple>()) , util::get< 17>( boost::declval<UTuple>()) , util::get< 18>( boost::declval<UTuple>()))
                ) == sizeof(yes_type);
            typedef boost::mpl::bool_<value> type;
        };
    }
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18>
    class tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18>
    {
    public:
        
        
        
        
        BOOST_CONSTEXPR tuple()
          : _m0() , _m1() , _m2() , _m3() , _m4() , _m5() , _m6() , _m7() , _m8() , _m9() , _m10() , _m11() , _m12() , _m13() , _m14() , _m15() , _m16() , _m17() , _m18()
        {}
        
        
        
        BOOST_CONSTEXPR explicit tuple(
            typename add_lvalue_reference<typename boost::add_const<T0>::type>::type v0 , typename add_lvalue_reference<typename boost::add_const<T1>::type>::type v1 , typename add_lvalue_reference<typename boost::add_const<T2>::type>::type v2 , typename add_lvalue_reference<typename boost::add_const<T3>::type>::type v3 , typename add_lvalue_reference<typename boost::add_const<T4>::type>::type v4 , typename add_lvalue_reference<typename boost::add_const<T5>::type>::type v5 , typename add_lvalue_reference<typename boost::add_const<T6>::type>::type v6 , typename add_lvalue_reference<typename boost::add_const<T7>::type>::type v7 , typename add_lvalue_reference<typename boost::add_const<T8>::type>::type v8 , typename add_lvalue_reference<typename boost::add_const<T9>::type>::type v9 , typename add_lvalue_reference<typename boost::add_const<T10>::type>::type v10 , typename add_lvalue_reference<typename boost::add_const<T11>::type>::type v11 , typename add_lvalue_reference<typename boost::add_const<T12>::type>::type v12 , typename add_lvalue_reference<typename boost::add_const<T13>::type>::type v13 , typename add_lvalue_reference<typename boost::add_const<T14>::type>::type v14 , typename add_lvalue_reference<typename boost::add_const<T15>::type>::type v15 , typename add_lvalue_reference<typename boost::add_const<T16>::type>::type v16 , typename add_lvalue_reference<typename boost::add_const<T17>::type>::type v17 , typename add_lvalue_reference<typename boost::add_const<T18>::type>::type v18
        ) : _m0(v0) , _m1(v1) , _m2(v2) , _m3(v3) , _m4(v4) , _m5(v5) , _m6(v6) , _m7(v7) , _m8(v8) , _m9(v9) , _m10(v10) , _m11(v11) , _m12(v12) , _m13(v13) , _m14(v14) , _m15(v15) , _m16(v16) , _m17(v17) , _m18(v18)
        {}
        
        
        
        
        
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18>
        BOOST_CONSTEXPR explicit tuple(
            BOOST_FWD_REF(U0) u0 , BOOST_FWD_REF(U1) u1 , BOOST_FWD_REF(U2) u2 , BOOST_FWD_REF(U3) u3 , BOOST_FWD_REF(U4) u4 , BOOST_FWD_REF(U5) u5 , BOOST_FWD_REF(U6) u6 , BOOST_FWD_REF(U7) u7 , BOOST_FWD_REF(U8) u8 , BOOST_FWD_REF(U9) u9 , BOOST_FWD_REF(U10) u10 , BOOST_FWD_REF(U11) u11 , BOOST_FWD_REF(U12) u12 , BOOST_FWD_REF(U13) u13 , BOOST_FWD_REF(U14) u14 , BOOST_FWD_REF(U15) u15 , BOOST_FWD_REF(U16) u16 , BOOST_FWD_REF(U17) u17 , BOOST_FWD_REF(U18) u18
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<tuple<U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12 , U13 , U14 , U15 , U16 , U17 , U18> >::type
                >::value
            >::type* = 0
        ) : _m0(boost::forward<U0>(u0)) , _m1(boost::forward<U1>(u1)) , _m2(boost::forward<U2>(u2)) , _m3(boost::forward<U3>(u3)) , _m4(boost::forward<U4>(u4)) , _m5(boost::forward<U5>(u5)) , _m6(boost::forward<U6>(u6)) , _m7(boost::forward<U7>(u7)) , _m8(boost::forward<U8>(u8)) , _m9(boost::forward<U9>(u9)) , _m10(boost::forward<U10>(u10)) , _m11(boost::forward<U11>(u11)) , _m12(boost::forward<U12>(u12)) , _m13(boost::forward<U13>(u13)) , _m14(boost::forward<U14>(u14)) , _m15(boost::forward<U15>(u15)) , _m16(boost::forward<U16>(u16)) , _m17(boost::forward<U17>(u17)) , _m18(boost::forward<U18>(u18))
        {}
        
        
        
        BOOST_CONSTEXPR tuple(tuple const& other)
          : _m0(other._m0) , _m1(other._m1) , _m2(other._m2) , _m3(other._m3) , _m4(other._m4) , _m5(other._m5) , _m6(other._m6) , _m7(other._m7) , _m8(other._m8) , _m9(other._m9) , _m10(other._m10) , _m11(other._m11) , _m12(other._m12) , _m13(other._m13) , _m14(other._m14) , _m15(other._m15) , _m16(other._m16) , _m17(other._m17) , _m18(other._m18)
        {}
        
        
        
        BOOST_CONSTEXPR tuple(BOOST_RV_REF(tuple) other)
          : _m0(boost::move(other._m0)) , _m1(boost::move(other._m1)) , _m2(boost::move(other._m2)) , _m3(boost::move(other._m3)) , _m4(boost::move(other._m4)) , _m5(boost::move(other._m5)) , _m6(boost::move(other._m6)) , _m7(boost::move(other._m7)) , _m8(boost::move(other._m8)) , _m9(boost::move(other._m9)) , _m10(boost::move(other._m10)) , _m11(boost::move(other._m11)) , _m12(boost::move(other._m12)) , _m13(boost::move(other._m13)) , _m14(boost::move(other._m14)) , _m15(boost::move(other._m15)) , _m16(boost::move(other._m16)) , _m17(boost::move(other._m17)) , _m18(boost::move(other._m18))
        {}
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        BOOST_CONSTEXPR tuple(
            BOOST_FWD_REF(UTuple) other
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<UTuple>::type
                >::value
            >::type* = 0
        ) : _m0(util::get< 0>(boost::forward<UTuple>(other))) , _m1(util::get< 1>(boost::forward<UTuple>(other))) , _m2(util::get< 2>(boost::forward<UTuple>(other))) , _m3(util::get< 3>(boost::forward<UTuple>(other))) , _m4(util::get< 4>(boost::forward<UTuple>(other))) , _m5(util::get< 5>(boost::forward<UTuple>(other))) , _m6(util::get< 6>(boost::forward<UTuple>(other))) , _m7(util::get< 7>(boost::forward<UTuple>(other))) , _m8(util::get< 8>(boost::forward<UTuple>(other))) , _m9(util::get< 9>(boost::forward<UTuple>(other))) , _m10(util::get< 10>(boost::forward<UTuple>(other))) , _m11(util::get< 11>(boost::forward<UTuple>(other))) , _m12(util::get< 12>(boost::forward<UTuple>(other))) , _m13(util::get< 13>(boost::forward<UTuple>(other))) , _m14(util::get< 14>(boost::forward<UTuple>(other))) , _m15(util::get< 15>(boost::forward<UTuple>(other))) , _m16(util::get< 16>(boost::forward<UTuple>(other))) , _m17(util::get< 17>(boost::forward<UTuple>(other))) , _m18(util::get< 18>(boost::forward<UTuple>(other)))
        {}
        
        
        
        
        
        tuple& operator=(tuple const& other)
        {
            _m0 = other._m0; _m1 = other._m1; _m2 = other._m2; _m3 = other._m3; _m4 = other._m4; _m5 = other._m5; _m6 = other._m6; _m7 = other._m7; _m8 = other._m8; _m9 = other._m9; _m10 = other._m10; _m11 = other._m11; _m12 = other._m12; _m13 = other._m13; _m14 = other._m14; _m15 = other._m15; _m16 = other._m16; _m17 = other._m17; _m18 = other._m18;;
            return *this;
        }
        
        
        
        
        
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            _m0 = boost::move(other._m0); _m1 = boost::move(other._m1); _m2 = boost::move(other._m2); _m3 = boost::move(other._m3); _m4 = boost::move(other._m4); _m5 = boost::move(other._m5); _m6 = boost::move(other._m6); _m7 = boost::move(other._m7); _m8 = boost::move(other._m8); _m9 = boost::move(other._m9); _m10 = boost::move(other._m10); _m11 = boost::move(other._m11); _m12 = boost::move(other._m12); _m13 = boost::move(other._m13); _m14 = boost::move(other._m14); _m15 = boost::move(other._m15); _m16 = boost::move(other._m16); _m17 = boost::move(other._m17); _m18 = boost::move(other._m18);;
            return *this;
        }
        
        
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        typename boost::enable_if_c<
            tuple_size<typename remove_reference<UTuple>::type>::value == 19
          , tuple&
        >::type
        operator=(BOOST_FWD_REF(UTuple) other)
        {
            _m0 = util::get< 0>(boost::forward<UTuple>(other)); _m1 = util::get< 1>(boost::forward<UTuple>(other)); _m2 = util::get< 2>(boost::forward<UTuple>(other)); _m3 = util::get< 3>(boost::forward<UTuple>(other)); _m4 = util::get< 4>(boost::forward<UTuple>(other)); _m5 = util::get< 5>(boost::forward<UTuple>(other)); _m6 = util::get< 6>(boost::forward<UTuple>(other)); _m7 = util::get< 7>(boost::forward<UTuple>(other)); _m8 = util::get< 8>(boost::forward<UTuple>(other)); _m9 = util::get< 9>(boost::forward<UTuple>(other)); _m10 = util::get< 10>(boost::forward<UTuple>(other)); _m11 = util::get< 11>(boost::forward<UTuple>(other)); _m12 = util::get< 12>(boost::forward<UTuple>(other)); _m13 = util::get< 13>(boost::forward<UTuple>(other)); _m14 = util::get< 14>(boost::forward<UTuple>(other)); _m15 = util::get< 15>(boost::forward<UTuple>(other)); _m16 = util::get< 16>(boost::forward<UTuple>(other)); _m17 = util::get< 17>(boost::forward<UTuple>(other)); _m18 = util::get< 18>(boost::forward<UTuple>(other));;
            return *this;
        }
        
        
        
        
        
        
        void swap(tuple& other)
            BOOST_NOEXCEPT_IF(true && BOOST_NOEXCEPT_EXPR((boost::swap(_m0._value, other._m0._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m1._value, other._m1._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m2._value, other._m2._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m3._value, other._m3._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m4._value, other._m4._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m5._value, other._m5._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m6._value, other._m6._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m7._value, other._m7._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m8._value, other._m8._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m9._value, other._m9._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m10._value, other._m10._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m11._value, other._m11._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m12._value, other._m12._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m13._value, other._m13._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m14._value, other._m14._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m15._value, other._m15._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m16._value, other._m16._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m17._value, other._m17._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m18._value, other._m18._value))))
        {
            boost::swap(_m0._value, other._m0._value); boost::swap(_m1._value, other._m1._value); boost::swap(_m2._value, other._m2._value); boost::swap(_m3._value, other._m3._value); boost::swap(_m4._value, other._m4._value); boost::swap(_m5._value, other._m5._value); boost::swap(_m6._value, other._m6._value); boost::swap(_m7._value, other._m7._value); boost::swap(_m8._value, other._m8._value); boost::swap(_m9._value, other._m9._value); boost::swap(_m10._value, other._m10._value); boost::swap(_m11._value, other._m11._value); boost::swap(_m12._value, other._m12._value); boost::swap(_m13._value, other._m13._value); boost::swap(_m14._value, other._m14._value); boost::swap(_m15._value, other._m15._value); boost::swap(_m16._value, other._m16._value); boost::swap(_m17._value, other._m17._value); boost::swap(_m18._value, other._m18._value);;
        }
    public: 
        detail::tuple_member<T0> _m0; detail::tuple_member<T1> _m1; detail::tuple_member<T2> _m2; detail::tuple_member<T3> _m3; detail::tuple_member<T4> _m4; detail::tuple_member<T5> _m5; detail::tuple_member<T6> _m6; detail::tuple_member<T7> _m7; detail::tuple_member<T8> _m8; detail::tuple_member<T9> _m9; detail::tuple_member<T10> _m10; detail::tuple_member<T11> _m11; detail::tuple_member<T12> _m12; detail::tuple_member<T13> _m13; detail::tuple_member<T14> _m14; detail::tuple_member<T15> _m15; detail::tuple_member<T16> _m16; detail::tuple_member<T17> _m17; detail::tuple_member<T18> _m18;;
    };
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type , typename detail::make_tuple_element<T6>::type , typename detail::make_tuple_element<T7>::type , typename detail::make_tuple_element<T8>::type , typename detail::make_tuple_element<T9>::type , typename detail::make_tuple_element<T10>::type , typename detail::make_tuple_element<T11>::type , typename detail::make_tuple_element<T12>::type , typename detail::make_tuple_element<T13>::type , typename detail::make_tuple_element<T14>::type , typename detail::make_tuple_element<T15>::type , typename detail::make_tuple_element<T16>::type , typename detail::make_tuple_element<T17>::type , typename detail::make_tuple_element<T18>::type>
    make_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5 , BOOST_FWD_REF(T6) v6 , BOOST_FWD_REF(T7) v7 , BOOST_FWD_REF(T8) v8 , BOOST_FWD_REF(T9) v9 , BOOST_FWD_REF(T10) v10 , BOOST_FWD_REF(T11) v11 , BOOST_FWD_REF(T12) v12 , BOOST_FWD_REF(T13) v13 , BOOST_FWD_REF(T14) v14 , BOOST_FWD_REF(T15) v15 , BOOST_FWD_REF(T16) v16 , BOOST_FWD_REF(T17) v17 , BOOST_FWD_REF(T18) v18)
    {
        return
            tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type , typename detail::make_tuple_element<T6>::type , typename detail::make_tuple_element<T7>::type , typename detail::make_tuple_element<T8>::type , typename detail::make_tuple_element<T9>::type , typename detail::make_tuple_element<T10>::type , typename detail::make_tuple_element<T11>::type , typename detail::make_tuple_element<T12>::type , typename detail::make_tuple_element<T13>::type , typename detail::make_tuple_element<T14>::type , typename detail::make_tuple_element<T15>::type , typename detail::make_tuple_element<T16>::type , typename detail::make_tuple_element<T17>::type , typename detail::make_tuple_element<T18>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5) , boost::forward<T6>(v6) , boost::forward<T7>(v7) , boost::forward<T8>(v8) , boost::forward<T9>(v9) , boost::forward<T10>(v10) , boost::forward<T11>(v11) , boost::forward<T12>(v12) , boost::forward<T13>(v13) , boost::forward<T14>(v14) , boost::forward<T15>(v15) , boost::forward<T16>(v16) , boost::forward<T17>(v17) , boost::forward<T18>(v18)
            );
    }
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18>
    BOOST_FORCEINLINE
    tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type , typename add_rvalue_reference<T6>::type , typename add_rvalue_reference<T7>::type , typename add_rvalue_reference<T8>::type , typename add_rvalue_reference<T9>::type , typename add_rvalue_reference<T10>::type , typename add_rvalue_reference<T11>::type , typename add_rvalue_reference<T12>::type , typename add_rvalue_reference<T13>::type , typename add_rvalue_reference<T14>::type , typename add_rvalue_reference<T15>::type , typename add_rvalue_reference<T16>::type , typename add_rvalue_reference<T17>::type , typename add_rvalue_reference<T18>::type>
    forward_as_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5 , BOOST_FWD_REF(T6) v6 , BOOST_FWD_REF(T7) v7 , BOOST_FWD_REF(T8) v8 , BOOST_FWD_REF(T9) v9 , BOOST_FWD_REF(T10) v10 , BOOST_FWD_REF(T11) v11 , BOOST_FWD_REF(T12) v12 , BOOST_FWD_REF(T13) v13 , BOOST_FWD_REF(T14) v14 , BOOST_FWD_REF(T15) v15 , BOOST_FWD_REF(T16) v16 , BOOST_FWD_REF(T17) v17 , BOOST_FWD_REF(T18) v18) BOOST_NOEXCEPT
    {
        return
            tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type , typename add_rvalue_reference<T6>::type , typename add_rvalue_reference<T7>::type , typename add_rvalue_reference<T8>::type , typename add_rvalue_reference<T9>::type , typename add_rvalue_reference<T10>::type , typename add_rvalue_reference<T11>::type , typename add_rvalue_reference<T12>::type , typename add_rvalue_reference<T13>::type , typename add_rvalue_reference<T14>::type , typename add_rvalue_reference<T15>::type , typename add_rvalue_reference<T16>::type , typename add_rvalue_reference<T17>::type , typename add_rvalue_reference<T18>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5) , boost::forward<T6>(v6) , boost::forward<T7>(v7) , boost::forward<T8>(v8) , boost::forward<T9>(v9) , boost::forward<T10>(v10) , boost::forward<T11>(v11) , boost::forward<T12>(v12) , boost::forward<T13>(v13) , boost::forward<T14>(v14) , boost::forward<T15>(v15) , boost::forward<T16>(v16) , boost::forward<T17>(v17) , boost::forward<T18>(v18)
            );
    }
    
    
    
    
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18>
    BOOST_FORCEINLINE
    tuple<T0& , T1& , T2& , T3& , T4& , T5& , T6& , T7& , T8& , T9& , T10& , T11& , T12& , T13& , T14& , T15& , T16& , T17& , T18&>
    tie(T0& v0 , T1& v1 , T2& v2 , T3& v3 , T4& v4 , T5& v5 , T6& v6 , T7& v7 , T8& v8 , T9& v9 , T10& v10 , T11& v11 , T12& v12 , T13& v13 , T14& v14 , T15& v15 , T16& v16 , T17& v17 , T18& v18) BOOST_NOEXCEPT
    {
        return
            tuple<T0& , T1& , T2& , T3& , T4& , T5& , T6& , T7& , T8& , T9& , T10& , T11& , T12& , T13& , T14& , T15& , T16& , T17& , T18&>(
                v0 , v1 , v2 , v3 , v4 , v5 , v6 , v7 , v8 , v9 , v10 , v11 , v12 , v13 , v14 , v15 , v16 , v17 , v18
            );
    }
    
    
    
    
    
    template <typename TTuple, typename UTuple>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename boost::lazy_enable_if_c<
        tuple_size<typename remove_reference<TTuple>::type>::value
      + tuple_size<typename remove_reference<UTuple>::type>::value == 19
      , detail::tuple_cat_result<TTuple, UTuple>
    >::type
    tuple_cat(BOOST_FWD_REF(TTuple) t, BOOST_FWD_REF(UTuple) u)
    {
        return
            typename detail::tuple_cat_result<TTuple, UTuple>::type(
                detail::tuple_cat_element< 0, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 1, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 2, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 3, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 4, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 5, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 6, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 7, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 8, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 9, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 10, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 11, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 12, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 13, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 14, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 15, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 16, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 17, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 18, T0, T1>::call(t0, t1)
            );
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename detail::tuple_cat_result<
        T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18
    >::type
    tuple_cat(BOOST_FWD_REF(T0) t0 , BOOST_FWD_REF(T1) t1 , BOOST_FWD_REF(T2) t2 , BOOST_FWD_REF(T3) t3 , BOOST_FWD_REF(T4) t4 , BOOST_FWD_REF(T5) t5 , BOOST_FWD_REF(T6) t6 , BOOST_FWD_REF(T7) t7 , BOOST_FWD_REF(T8) t8 , BOOST_FWD_REF(T9) t9 , BOOST_FWD_REF(T10) t10 , BOOST_FWD_REF(T11) t11 , BOOST_FWD_REF(T12) t12 , BOOST_FWD_REF(T13) t13 , BOOST_FWD_REF(T14) t14 , BOOST_FWD_REF(T15) t15 , BOOST_FWD_REF(T16) t16 , BOOST_FWD_REF(T17) t17 , BOOST_FWD_REF(T18) t18)
    {
        return
            util::tuple_cat(
                util::tuple_cat( boost::forward<T0> (t0) , boost::forward<T1> (t1)) , util::tuple_cat( boost::forward<T2> (t2) , boost::forward<T3> (t3)) , util::tuple_cat( boost::forward<T4> (t4) , boost::forward<T5> (t5)) , util::tuple_cat( boost::forward<T6> (t6) , boost::forward<T7> (t7)) , util::tuple_cat( boost::forward<T8> (t8) , boost::forward<T9> (t9)) , util::tuple_cat( boost::forward<T10> (t10) , boost::forward<T11> (t11)) , util::tuple_cat( boost::forward<T12> (t12) , boost::forward<T13> (t13)) , util::tuple_cat( boost::forward<T14> (t14) , boost::forward<T15> (t15)) , util::tuple_cat( boost::forward<T16> (t16) , boost::forward<T17> (t17))
              , boost::forward<T18>
                    (t18)
            );
    }
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18>
    struct tuple_size<tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18> >
      : boost::mpl::size_t<19>
    {};
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    struct tuple_element<18, tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19> >
      : boost::mpl::identity<T18>
    {
        template <typename Tuple>
        static BOOST_CONSTEXPR BOOST_FORCEINLINE
        typename detail::qualify_as<T18, Tuple&>::type
        get(Tuple& tuple) BOOST_NOEXCEPT
        {
            return tuple._m18._value;
        }
    };
}}
namespace hpx { namespace util
{
    namespace detail
    {
        template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19, typename UTuple>
        struct are_tuples_compatible<
            tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19>, UTuple
          , typename boost::enable_if_c<
                tuple_size<typename remove_reference<UTuple>::type>::value == 20
            >::type
        >
        {
            typedef char(&no_type)[1];
            typedef char(&yes_type)[2];
            static no_type call(...);
            static yes_type call(T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19);
            static bool const value =
                sizeof(
                    call(util::get< 0>( boost::declval<UTuple>()) , util::get< 1>( boost::declval<UTuple>()) , util::get< 2>( boost::declval<UTuple>()) , util::get< 3>( boost::declval<UTuple>()) , util::get< 4>( boost::declval<UTuple>()) , util::get< 5>( boost::declval<UTuple>()) , util::get< 6>( boost::declval<UTuple>()) , util::get< 7>( boost::declval<UTuple>()) , util::get< 8>( boost::declval<UTuple>()) , util::get< 9>( boost::declval<UTuple>()) , util::get< 10>( boost::declval<UTuple>()) , util::get< 11>( boost::declval<UTuple>()) , util::get< 12>( boost::declval<UTuple>()) , util::get< 13>( boost::declval<UTuple>()) , util::get< 14>( boost::declval<UTuple>()) , util::get< 15>( boost::declval<UTuple>()) , util::get< 16>( boost::declval<UTuple>()) , util::get< 17>( boost::declval<UTuple>()) , util::get< 18>( boost::declval<UTuple>()) , util::get< 19>( boost::declval<UTuple>()))
                ) == sizeof(yes_type);
            typedef boost::mpl::bool_<value> type;
        };
    }
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    class tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19>
    {
    public:
        
        
        
        
        BOOST_CONSTEXPR tuple()
          : _m0() , _m1() , _m2() , _m3() , _m4() , _m5() , _m6() , _m7() , _m8() , _m9() , _m10() , _m11() , _m12() , _m13() , _m14() , _m15() , _m16() , _m17() , _m18() , _m19()
        {}
        
        
        
        BOOST_CONSTEXPR explicit tuple(
            typename add_lvalue_reference<typename boost::add_const<T0>::type>::type v0 , typename add_lvalue_reference<typename boost::add_const<T1>::type>::type v1 , typename add_lvalue_reference<typename boost::add_const<T2>::type>::type v2 , typename add_lvalue_reference<typename boost::add_const<T3>::type>::type v3 , typename add_lvalue_reference<typename boost::add_const<T4>::type>::type v4 , typename add_lvalue_reference<typename boost::add_const<T5>::type>::type v5 , typename add_lvalue_reference<typename boost::add_const<T6>::type>::type v6 , typename add_lvalue_reference<typename boost::add_const<T7>::type>::type v7 , typename add_lvalue_reference<typename boost::add_const<T8>::type>::type v8 , typename add_lvalue_reference<typename boost::add_const<T9>::type>::type v9 , typename add_lvalue_reference<typename boost::add_const<T10>::type>::type v10 , typename add_lvalue_reference<typename boost::add_const<T11>::type>::type v11 , typename add_lvalue_reference<typename boost::add_const<T12>::type>::type v12 , typename add_lvalue_reference<typename boost::add_const<T13>::type>::type v13 , typename add_lvalue_reference<typename boost::add_const<T14>::type>::type v14 , typename add_lvalue_reference<typename boost::add_const<T15>::type>::type v15 , typename add_lvalue_reference<typename boost::add_const<T16>::type>::type v16 , typename add_lvalue_reference<typename boost::add_const<T17>::type>::type v17 , typename add_lvalue_reference<typename boost::add_const<T18>::type>::type v18 , typename add_lvalue_reference<typename boost::add_const<T19>::type>::type v19
        ) : _m0(v0) , _m1(v1) , _m2(v2) , _m3(v3) , _m4(v4) , _m5(v5) , _m6(v6) , _m7(v7) , _m8(v8) , _m9(v9) , _m10(v10) , _m11(v11) , _m12(v12) , _m13(v13) , _m14(v14) , _m15(v15) , _m16(v16) , _m17(v17) , _m18(v18) , _m19(v19)
        {}
        
        
        
        
        
        template <typename U0 , typename U1 , typename U2 , typename U3 , typename U4 , typename U5 , typename U6 , typename U7 , typename U8 , typename U9 , typename U10 , typename U11 , typename U12 , typename U13 , typename U14 , typename U15 , typename U16 , typename U17 , typename U18 , typename U19>
        BOOST_CONSTEXPR explicit tuple(
            BOOST_FWD_REF(U0) u0 , BOOST_FWD_REF(U1) u1 , BOOST_FWD_REF(U2) u2 , BOOST_FWD_REF(U3) u3 , BOOST_FWD_REF(U4) u4 , BOOST_FWD_REF(U5) u5 , BOOST_FWD_REF(U6) u6 , BOOST_FWD_REF(U7) u7 , BOOST_FWD_REF(U8) u8 , BOOST_FWD_REF(U9) u9 , BOOST_FWD_REF(U10) u10 , BOOST_FWD_REF(U11) u11 , BOOST_FWD_REF(U12) u12 , BOOST_FWD_REF(U13) u13 , BOOST_FWD_REF(U14) u14 , BOOST_FWD_REF(U15) u15 , BOOST_FWD_REF(U16) u16 , BOOST_FWD_REF(U17) u17 , BOOST_FWD_REF(U18) u18 , BOOST_FWD_REF(U19) u19
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<tuple<U0 , U1 , U2 , U3 , U4 , U5 , U6 , U7 , U8 , U9 , U10 , U11 , U12 , U13 , U14 , U15 , U16 , U17 , U18 , U19> >::type
                >::value
            >::type* = 0
        ) : _m0(boost::forward<U0>(u0)) , _m1(boost::forward<U1>(u1)) , _m2(boost::forward<U2>(u2)) , _m3(boost::forward<U3>(u3)) , _m4(boost::forward<U4>(u4)) , _m5(boost::forward<U5>(u5)) , _m6(boost::forward<U6>(u6)) , _m7(boost::forward<U7>(u7)) , _m8(boost::forward<U8>(u8)) , _m9(boost::forward<U9>(u9)) , _m10(boost::forward<U10>(u10)) , _m11(boost::forward<U11>(u11)) , _m12(boost::forward<U12>(u12)) , _m13(boost::forward<U13>(u13)) , _m14(boost::forward<U14>(u14)) , _m15(boost::forward<U15>(u15)) , _m16(boost::forward<U16>(u16)) , _m17(boost::forward<U17>(u17)) , _m18(boost::forward<U18>(u18)) , _m19(boost::forward<U19>(u19))
        {}
        
        
        
        BOOST_CONSTEXPR tuple(tuple const& other)
          : _m0(other._m0) , _m1(other._m1) , _m2(other._m2) , _m3(other._m3) , _m4(other._m4) , _m5(other._m5) , _m6(other._m6) , _m7(other._m7) , _m8(other._m8) , _m9(other._m9) , _m10(other._m10) , _m11(other._m11) , _m12(other._m12) , _m13(other._m13) , _m14(other._m14) , _m15(other._m15) , _m16(other._m16) , _m17(other._m17) , _m18(other._m18) , _m19(other._m19)
        {}
        
        
        
        BOOST_CONSTEXPR tuple(BOOST_RV_REF(tuple) other)
          : _m0(boost::move(other._m0)) , _m1(boost::move(other._m1)) , _m2(boost::move(other._m2)) , _m3(boost::move(other._m3)) , _m4(boost::move(other._m4)) , _m5(boost::move(other._m5)) , _m6(boost::move(other._m6)) , _m7(boost::move(other._m7)) , _m8(boost::move(other._m8)) , _m9(boost::move(other._m9)) , _m10(boost::move(other._m10)) , _m11(boost::move(other._m11)) , _m12(boost::move(other._m12)) , _m13(boost::move(other._m13)) , _m14(boost::move(other._m14)) , _m15(boost::move(other._m15)) , _m16(boost::move(other._m16)) , _m17(boost::move(other._m17)) , _m18(boost::move(other._m18)) , _m19(boost::move(other._m19))
        {}
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        BOOST_CONSTEXPR tuple(
            BOOST_FWD_REF(UTuple) other
          , typename boost::enable_if_c<
                detail::are_tuples_compatible<
                    tuple
                  , typename add_rvalue_reference<UTuple>::type
                >::value
            >::type* = 0
        ) : _m0(util::get< 0>(boost::forward<UTuple>(other))) , _m1(util::get< 1>(boost::forward<UTuple>(other))) , _m2(util::get< 2>(boost::forward<UTuple>(other))) , _m3(util::get< 3>(boost::forward<UTuple>(other))) , _m4(util::get< 4>(boost::forward<UTuple>(other))) , _m5(util::get< 5>(boost::forward<UTuple>(other))) , _m6(util::get< 6>(boost::forward<UTuple>(other))) , _m7(util::get< 7>(boost::forward<UTuple>(other))) , _m8(util::get< 8>(boost::forward<UTuple>(other))) , _m9(util::get< 9>(boost::forward<UTuple>(other))) , _m10(util::get< 10>(boost::forward<UTuple>(other))) , _m11(util::get< 11>(boost::forward<UTuple>(other))) , _m12(util::get< 12>(boost::forward<UTuple>(other))) , _m13(util::get< 13>(boost::forward<UTuple>(other))) , _m14(util::get< 14>(boost::forward<UTuple>(other))) , _m15(util::get< 15>(boost::forward<UTuple>(other))) , _m16(util::get< 16>(boost::forward<UTuple>(other))) , _m17(util::get< 17>(boost::forward<UTuple>(other))) , _m18(util::get< 18>(boost::forward<UTuple>(other))) , _m19(util::get< 19>(boost::forward<UTuple>(other)))
        {}
        
        
        
        
        
        tuple& operator=(tuple const& other)
        {
            _m0 = other._m0; _m1 = other._m1; _m2 = other._m2; _m3 = other._m3; _m4 = other._m4; _m5 = other._m5; _m6 = other._m6; _m7 = other._m7; _m8 = other._m8; _m9 = other._m9; _m10 = other._m10; _m11 = other._m11; _m12 = other._m12; _m13 = other._m13; _m14 = other._m14; _m15 = other._m15; _m16 = other._m16; _m17 = other._m17; _m18 = other._m18; _m19 = other._m19;;
            return *this;
        }
        
        
        
        
        
        tuple& operator=(BOOST_RV_REF(tuple) other)
        {
            _m0 = boost::move(other._m0); _m1 = boost::move(other._m1); _m2 = boost::move(other._m2); _m3 = boost::move(other._m3); _m4 = boost::move(other._m4); _m5 = boost::move(other._m5); _m6 = boost::move(other._m6); _m7 = boost::move(other._m7); _m8 = boost::move(other._m8); _m9 = boost::move(other._m9); _m10 = boost::move(other._m10); _m11 = boost::move(other._m11); _m12 = boost::move(other._m12); _m13 = boost::move(other._m13); _m14 = boost::move(other._m14); _m15 = boost::move(other._m15); _m16 = boost::move(other._m16); _m17 = boost::move(other._m17); _m18 = boost::move(other._m18); _m19 = boost::move(other._m19);;
            return *this;
        }
        
        
        
        
        
        
        
        
        
        
        
        template <typename UTuple>
        typename boost::enable_if_c<
            tuple_size<typename remove_reference<UTuple>::type>::value == 20
          , tuple&
        >::type
        operator=(BOOST_FWD_REF(UTuple) other)
        {
            _m0 = util::get< 0>(boost::forward<UTuple>(other)); _m1 = util::get< 1>(boost::forward<UTuple>(other)); _m2 = util::get< 2>(boost::forward<UTuple>(other)); _m3 = util::get< 3>(boost::forward<UTuple>(other)); _m4 = util::get< 4>(boost::forward<UTuple>(other)); _m5 = util::get< 5>(boost::forward<UTuple>(other)); _m6 = util::get< 6>(boost::forward<UTuple>(other)); _m7 = util::get< 7>(boost::forward<UTuple>(other)); _m8 = util::get< 8>(boost::forward<UTuple>(other)); _m9 = util::get< 9>(boost::forward<UTuple>(other)); _m10 = util::get< 10>(boost::forward<UTuple>(other)); _m11 = util::get< 11>(boost::forward<UTuple>(other)); _m12 = util::get< 12>(boost::forward<UTuple>(other)); _m13 = util::get< 13>(boost::forward<UTuple>(other)); _m14 = util::get< 14>(boost::forward<UTuple>(other)); _m15 = util::get< 15>(boost::forward<UTuple>(other)); _m16 = util::get< 16>(boost::forward<UTuple>(other)); _m17 = util::get< 17>(boost::forward<UTuple>(other)); _m18 = util::get< 18>(boost::forward<UTuple>(other)); _m19 = util::get< 19>(boost::forward<UTuple>(other));;
            return *this;
        }
        
        
        
        
        
        
        void swap(tuple& other)
            BOOST_NOEXCEPT_IF(true && BOOST_NOEXCEPT_EXPR((boost::swap(_m0._value, other._m0._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m1._value, other._m1._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m2._value, other._m2._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m3._value, other._m3._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m4._value, other._m4._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m5._value, other._m5._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m6._value, other._m6._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m7._value, other._m7._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m8._value, other._m8._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m9._value, other._m9._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m10._value, other._m10._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m11._value, other._m11._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m12._value, other._m12._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m13._value, other._m13._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m14._value, other._m14._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m15._value, other._m15._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m16._value, other._m16._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m17._value, other._m17._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m18._value, other._m18._value))) && BOOST_NOEXCEPT_EXPR((boost::swap(_m19._value, other._m19._value))))
        {
            boost::swap(_m0._value, other._m0._value); boost::swap(_m1._value, other._m1._value); boost::swap(_m2._value, other._m2._value); boost::swap(_m3._value, other._m3._value); boost::swap(_m4._value, other._m4._value); boost::swap(_m5._value, other._m5._value); boost::swap(_m6._value, other._m6._value); boost::swap(_m7._value, other._m7._value); boost::swap(_m8._value, other._m8._value); boost::swap(_m9._value, other._m9._value); boost::swap(_m10._value, other._m10._value); boost::swap(_m11._value, other._m11._value); boost::swap(_m12._value, other._m12._value); boost::swap(_m13._value, other._m13._value); boost::swap(_m14._value, other._m14._value); boost::swap(_m15._value, other._m15._value); boost::swap(_m16._value, other._m16._value); boost::swap(_m17._value, other._m17._value); boost::swap(_m18._value, other._m18._value); boost::swap(_m19._value, other._m19._value);;
        }
    public: 
        detail::tuple_member<T0> _m0; detail::tuple_member<T1> _m1; detail::tuple_member<T2> _m2; detail::tuple_member<T3> _m3; detail::tuple_member<T4> _m4; detail::tuple_member<T5> _m5; detail::tuple_member<T6> _m6; detail::tuple_member<T7> _m7; detail::tuple_member<T8> _m8; detail::tuple_member<T9> _m9; detail::tuple_member<T10> _m10; detail::tuple_member<T11> _m11; detail::tuple_member<T12> _m12; detail::tuple_member<T13> _m13; detail::tuple_member<T14> _m14; detail::tuple_member<T15> _m15; detail::tuple_member<T16> _m16; detail::tuple_member<T17> _m17; detail::tuple_member<T18> _m18; detail::tuple_member<T19> _m19;;
    };
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type , typename detail::make_tuple_element<T6>::type , typename detail::make_tuple_element<T7>::type , typename detail::make_tuple_element<T8>::type , typename detail::make_tuple_element<T9>::type , typename detail::make_tuple_element<T10>::type , typename detail::make_tuple_element<T11>::type , typename detail::make_tuple_element<T12>::type , typename detail::make_tuple_element<T13>::type , typename detail::make_tuple_element<T14>::type , typename detail::make_tuple_element<T15>::type , typename detail::make_tuple_element<T16>::type , typename detail::make_tuple_element<T17>::type , typename detail::make_tuple_element<T18>::type , typename detail::make_tuple_element<T19>::type>
    make_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5 , BOOST_FWD_REF(T6) v6 , BOOST_FWD_REF(T7) v7 , BOOST_FWD_REF(T8) v8 , BOOST_FWD_REF(T9) v9 , BOOST_FWD_REF(T10) v10 , BOOST_FWD_REF(T11) v11 , BOOST_FWD_REF(T12) v12 , BOOST_FWD_REF(T13) v13 , BOOST_FWD_REF(T14) v14 , BOOST_FWD_REF(T15) v15 , BOOST_FWD_REF(T16) v16 , BOOST_FWD_REF(T17) v17 , BOOST_FWD_REF(T18) v18 , BOOST_FWD_REF(T19) v19)
    {
        return
            tuple<typename detail::make_tuple_element<T0>::type , typename detail::make_tuple_element<T1>::type , typename detail::make_tuple_element<T2>::type , typename detail::make_tuple_element<T3>::type , typename detail::make_tuple_element<T4>::type , typename detail::make_tuple_element<T5>::type , typename detail::make_tuple_element<T6>::type , typename detail::make_tuple_element<T7>::type , typename detail::make_tuple_element<T8>::type , typename detail::make_tuple_element<T9>::type , typename detail::make_tuple_element<T10>::type , typename detail::make_tuple_element<T11>::type , typename detail::make_tuple_element<T12>::type , typename detail::make_tuple_element<T13>::type , typename detail::make_tuple_element<T14>::type , typename detail::make_tuple_element<T15>::type , typename detail::make_tuple_element<T16>::type , typename detail::make_tuple_element<T17>::type , typename detail::make_tuple_element<T18>::type , typename detail::make_tuple_element<T19>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5) , boost::forward<T6>(v6) , boost::forward<T7>(v7) , boost::forward<T8>(v8) , boost::forward<T9>(v9) , boost::forward<T10>(v10) , boost::forward<T11>(v11) , boost::forward<T12>(v12) , boost::forward<T13>(v13) , boost::forward<T14>(v14) , boost::forward<T15>(v15) , boost::forward<T16>(v16) , boost::forward<T17>(v17) , boost::forward<T18>(v18) , boost::forward<T19>(v19)
            );
    }
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    BOOST_FORCEINLINE
    tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type , typename add_rvalue_reference<T6>::type , typename add_rvalue_reference<T7>::type , typename add_rvalue_reference<T8>::type , typename add_rvalue_reference<T9>::type , typename add_rvalue_reference<T10>::type , typename add_rvalue_reference<T11>::type , typename add_rvalue_reference<T12>::type , typename add_rvalue_reference<T13>::type , typename add_rvalue_reference<T14>::type , typename add_rvalue_reference<T15>::type , typename add_rvalue_reference<T16>::type , typename add_rvalue_reference<T17>::type , typename add_rvalue_reference<T18>::type , typename add_rvalue_reference<T19>::type>
    forward_as_tuple(BOOST_FWD_REF(T0) v0 , BOOST_FWD_REF(T1) v1 , BOOST_FWD_REF(T2) v2 , BOOST_FWD_REF(T3) v3 , BOOST_FWD_REF(T4) v4 , BOOST_FWD_REF(T5) v5 , BOOST_FWD_REF(T6) v6 , BOOST_FWD_REF(T7) v7 , BOOST_FWD_REF(T8) v8 , BOOST_FWD_REF(T9) v9 , BOOST_FWD_REF(T10) v10 , BOOST_FWD_REF(T11) v11 , BOOST_FWD_REF(T12) v12 , BOOST_FWD_REF(T13) v13 , BOOST_FWD_REF(T14) v14 , BOOST_FWD_REF(T15) v15 , BOOST_FWD_REF(T16) v16 , BOOST_FWD_REF(T17) v17 , BOOST_FWD_REF(T18) v18 , BOOST_FWD_REF(T19) v19) BOOST_NOEXCEPT
    {
        return
            tuple<typename add_rvalue_reference<T0>::type , typename add_rvalue_reference<T1>::type , typename add_rvalue_reference<T2>::type , typename add_rvalue_reference<T3>::type , typename add_rvalue_reference<T4>::type , typename add_rvalue_reference<T5>::type , typename add_rvalue_reference<T6>::type , typename add_rvalue_reference<T7>::type , typename add_rvalue_reference<T8>::type , typename add_rvalue_reference<T9>::type , typename add_rvalue_reference<T10>::type , typename add_rvalue_reference<T11>::type , typename add_rvalue_reference<T12>::type , typename add_rvalue_reference<T13>::type , typename add_rvalue_reference<T14>::type , typename add_rvalue_reference<T15>::type , typename add_rvalue_reference<T16>::type , typename add_rvalue_reference<T17>::type , typename add_rvalue_reference<T18>::type , typename add_rvalue_reference<T19>::type>(
                boost::forward<T0>(v0) , boost::forward<T1>(v1) , boost::forward<T2>(v2) , boost::forward<T3>(v3) , boost::forward<T4>(v4) , boost::forward<T5>(v5) , boost::forward<T6>(v6) , boost::forward<T7>(v7) , boost::forward<T8>(v8) , boost::forward<T9>(v9) , boost::forward<T10>(v10) , boost::forward<T11>(v11) , boost::forward<T12>(v12) , boost::forward<T13>(v13) , boost::forward<T14>(v14) , boost::forward<T15>(v15) , boost::forward<T16>(v16) , boost::forward<T17>(v17) , boost::forward<T18>(v18) , boost::forward<T19>(v19)
            );
    }
    
    
    
    
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    BOOST_FORCEINLINE
    tuple<T0& , T1& , T2& , T3& , T4& , T5& , T6& , T7& , T8& , T9& , T10& , T11& , T12& , T13& , T14& , T15& , T16& , T17& , T18& , T19&>
    tie(T0& v0 , T1& v1 , T2& v2 , T3& v3 , T4& v4 , T5& v5 , T6& v6 , T7& v7 , T8& v8 , T9& v9 , T10& v10 , T11& v11 , T12& v12 , T13& v13 , T14& v14 , T15& v15 , T16& v16 , T17& v17 , T18& v18 , T19& v19) BOOST_NOEXCEPT
    {
        return
            tuple<T0& , T1& , T2& , T3& , T4& , T5& , T6& , T7& , T8& , T9& , T10& , T11& , T12& , T13& , T14& , T15& , T16& , T17& , T18& , T19&>(
                v0 , v1 , v2 , v3 , v4 , v5 , v6 , v7 , v8 , v9 , v10 , v11 , v12 , v13 , v14 , v15 , v16 , v17 , v18 , v19
            );
    }
    
    
    
    
    
    template <typename TTuple, typename UTuple>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename boost::lazy_enable_if_c<
        tuple_size<typename remove_reference<TTuple>::type>::value
      + tuple_size<typename remove_reference<UTuple>::type>::value == 20
      , detail::tuple_cat_result<TTuple, UTuple>
    >::type
    tuple_cat(BOOST_FWD_REF(TTuple) t, BOOST_FWD_REF(UTuple) u)
    {
        return
            typename detail::tuple_cat_result<TTuple, UTuple>::type(
                detail::tuple_cat_element< 0, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 1, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 2, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 3, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 4, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 5, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 6, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 7, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 8, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 9, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 10, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 11, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 12, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 13, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 14, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 15, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 16, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 17, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 18, T0, T1>::call(t0, t1) , detail::tuple_cat_element< 19, T0, T1>::call(t0, t1)
            );
    }
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    BOOST_CONSTEXPR BOOST_FORCEINLINE
    typename detail::tuple_cat_result<
        T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19
    >::type
    tuple_cat(BOOST_FWD_REF(T0) t0 , BOOST_FWD_REF(T1) t1 , BOOST_FWD_REF(T2) t2 , BOOST_FWD_REF(T3) t3 , BOOST_FWD_REF(T4) t4 , BOOST_FWD_REF(T5) t5 , BOOST_FWD_REF(T6) t6 , BOOST_FWD_REF(T7) t7 , BOOST_FWD_REF(T8) t8 , BOOST_FWD_REF(T9) t9 , BOOST_FWD_REF(T10) t10 , BOOST_FWD_REF(T11) t11 , BOOST_FWD_REF(T12) t12 , BOOST_FWD_REF(T13) t13 , BOOST_FWD_REF(T14) t14 , BOOST_FWD_REF(T15) t15 , BOOST_FWD_REF(T16) t16 , BOOST_FWD_REF(T17) t17 , BOOST_FWD_REF(T18) t18 , BOOST_FWD_REF(T19) t19)
    {
        return
            util::tuple_cat(
                util::tuple_cat( boost::forward<T0> (t0) , boost::forward<T1> (t1)) , util::tuple_cat( boost::forward<T2> (t2) , boost::forward<T3> (t3)) , util::tuple_cat( boost::forward<T4> (t4) , boost::forward<T5> (t5)) , util::tuple_cat( boost::forward<T6> (t6) , boost::forward<T7> (t7)) , util::tuple_cat( boost::forward<T8> (t8) , boost::forward<T9> (t9)) , util::tuple_cat( boost::forward<T10> (t10) , boost::forward<T11> (t11)) , util::tuple_cat( boost::forward<T12> (t12) , boost::forward<T13> (t13)) , util::tuple_cat( boost::forward<T14> (t14) , boost::forward<T15> (t15)) , util::tuple_cat( boost::forward<T16> (t16) , boost::forward<T17> (t17)) , util::tuple_cat( boost::forward<T18> (t18) , boost::forward<T19> (t19))
            );
    }
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    struct tuple_size<tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19> >
      : boost::mpl::size_t<20>
    {};
    
    
    
    
    template <typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7 , typename T8 , typename T9 , typename T10 , typename T11 , typename T12 , typename T13 , typename T14 , typename T15 , typename T16 , typename T17 , typename T18 , typename T19>
    struct tuple_element<19, tuple<T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7 , T8 , T9 , T10 , T11 , T12 , T13 , T14 , T15 , T16 , T17 , T18 , T19> >
      : boost::mpl::identity<T19>
    {
        template <typename Tuple>
        static BOOST_CONSTEXPR BOOST_FORCEINLINE
        typename detail::qualify_as<T19, Tuple&>::type
        get(Tuple& tuple) BOOST_NOEXCEPT
        {
            return tuple._m19._value;
        }
    };
}}
