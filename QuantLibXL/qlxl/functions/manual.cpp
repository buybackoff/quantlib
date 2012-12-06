
/* 
 Copyright (C) 2007 Ferdinando Ametrano
 Copyright (C) 2006 Eric Ehlers

 This file is part of QuantLib, a free-software/open-source library
 for financial quantitative analysts and developers - http://quantlib.org/

 QuantLib is free software: you can redistribute it and/or modify it
 under the terms of the QuantLib license.  You should have received a
 copy of the license along with this program; if not, please email
 <quantlib-dev@lists.sf.net>. The license is also available online at
 <http://quantlib.org/license.shtml>.

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE.  See the license for more details.
*/

// Excel functions coded by hand, to be registered with Excel
// alongside the autogenerated functions.

#include <qlxl/functions/functioncount.hpp>
#include <ohxl/objecthandlerxl.hpp>

#define XLL_DEC DLLEXPORT


XLL_DEC long *qlFunctionCount() {
    static long returnValue = FUNCTION_COUNT;
    return &returnValue;
}

// Repository URL of the working copy:
// $WCURL$

//XLL_DEC long *qlInfoHighestRevisionNumber() {
//    static long returnValue = $WCREV$;
//    return &returnValue;
//}
//
//XLL_DEC char *qlInfoTimeStamp() {
//    char *date = "$WCDATE$";
//    return date;
//}
//
//#define MIXED_REVISIONS $WCMIXED?1:0$
//XLL_DEC char *qlInfoRevisionRange() {
//    #if MIXED_REVISIONS
//    #   pragma message(__FILE__ "() warning: mixed update revisions ($WCRANGE$)")
//    #endif
//    char *revRange = "$WCRANGE$";
//    return revRange;
//}
//
//#define LOCAL_MODIFICATION $WCMODS?1:0$
//XLL_DEC bool *qlInfoLocalModifications() {
//    #if LOCAL_MODIFICATION
//    #   pragma message(__FILE__ "() warning: local modifications have been found")
//    static bool result = true;
//    #else
//    static bool result = false;
//    #endif
//    return &result;
//}