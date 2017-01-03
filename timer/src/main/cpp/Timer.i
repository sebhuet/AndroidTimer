/* File : IRCodeProducer.i */
%module Timer_Wrapper

/*
%include "std_string.i"
%include "std_vector.i"
%include "std_deque.i"
%include "stdint.i"
*/

/* Anything in the following section is added verbatim to the .cxx wrapper file */ 
%{
#include "./fr/sebhuet/timer/Timer.hpp"
%}

%include "./fr/sebhuet/timer/Timer.hpp"


%pragma(java) jniclasscode=%{
  static {
    try {
        System.loadLibrary("timer-lib");
    } catch (UnsatisfiedLinkError e) {
      System.err.println("Native code library timer failed to load. check lib name \n" + e);
      System.exit(1);
    }
  }
%}
