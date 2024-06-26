// make_unique_template.h
// note: no include guard

#define N BOOST_PP_ITERATION()

#define MAKE_UNIQUE_TEMPLATE_PARMS \
  BOOST_PP_ENUM_PARAMS(N, typename A)

#define MAKE_UNIQUE_FUNCTION_PARM(J,I,D) \
  BOOST_PP_CAT(A,I)&& BOOST_PP_CAT(a,I)

#define MAKE_UNIQUE_FUNCTION_PARMS \
  BOOST_PP_ENUM(N, MAKE_UNIQUE_FUNCTION_PARM, BOOST_PP_EMPTY)

#define MAKE_UNIQUE_ARG(J,I,D) \
  std::forward<BOOST_PP_CAT(A,I)>(BOOST_PP_CAT(a,I))

#define MAKE_UNIQUE_ARGS \
  BOOST_PP_ENUM(N, MAKE_UNIQUE_ARG, BOOST_PP_EMPTY)

template<class T BOOST_PP_COMMA_IF(N) MAKE_UNIQUE_TEMPLATE_PARMS>
std::unique_ptr<T> make_unique(MAKE_UNIQUE_FUNCTION_PARMS){
  return std::unique_ptr<T>(new T(MAKE_UNIQUE_ARGS));
}

// clean up
#undef MAKE_UNIQUE_TEMPLATE_PARMS
#undef MAKE_UNIQUE_FUNCTION_PARM
#undef MAKE_UNIQUE_FUNCTION_PARMS
#undef MAKE_UNIQUE_ARG
#undef MAKE_UNIQUE_ARGS
#undef N
