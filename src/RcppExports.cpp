// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "magick_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// magick_coder_info
Rcpp::List magick_coder_info(Rcpp::String format);
RcppExport SEXP magick_magick_coder_info(SEXP formatSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::String >::type format(formatSEXP);
    __result = Rcpp::wrap(magick_coder_info(format));
    return __result;
END_RCPP
}
// magick_frame_read
XPtrFrame magick_frame_read(Rcpp::RawVector x);
RcppExport SEXP magick_magick_frame_read(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::RawVector >::type x(xSEXP);
    __result = Rcpp::wrap(magick_frame_read(x));
    return __result;
END_RCPP
}
// magick_frame_write
Rcpp::RawVector magick_frame_write(XPtrFrame frame, Rcpp::String format);
RcppExport SEXP magick_magick_frame_write(SEXP frameSEXP, SEXP formatSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrFrame >::type frame(frameSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type format(formatSEXP);
    __result = Rcpp::wrap(magick_frame_write(frame, format));
    return __result;
END_RCPP
}
// magick_frame_info
Rcpp::List magick_frame_info(XPtrFrame frame);
RcppExport SEXP magick_magick_frame_info(SEXP frameSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrFrame >::type frame(frameSEXP);
    __result = Rcpp::wrap(magick_frame_info(frame));
    return __result;
END_RCPP
}
// magick_image_read
XPtrImage magick_image_read(Rcpp::RawVector x);
RcppExport SEXP magick_magick_image_read(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::RawVector >::type x(xSEXP);
    __result = Rcpp::wrap(magick_image_read(x));
    return __result;
END_RCPP
}
// magick_image_create
XPtrImage magick_image_create(Rcpp::List inputList);
RcppExport SEXP magick_magick_image_create(SEXP inputListSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::List >::type inputList(inputListSEXP);
    __result = Rcpp::wrap(magick_image_create(inputList));
    return __result;
END_RCPP
}
// magick_image_write
Rcpp::RawVector magick_image_write(XPtrImage image, Rcpp::String format, int delay);
RcppExport SEXP magick_magick_image_write(SEXP imageSEXP, SEXP formatSEXP, SEXP delaySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtrImage >::type image(imageSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type format(formatSEXP);
    Rcpp::traits::input_parameter< int >::type delay(delaySEXP);
    __result = Rcpp::wrap(magick_image_write(image, format, delay));
    return __result;
END_RCPP
}
