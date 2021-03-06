/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#ifndef IGLK_SUBCLASSING_RESTRICTED
#if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#define IGLK_SUBCLASSING_RESTRICTED __attribute__((objc_subclassing_restricted))
#else
#define IGLK_SUBCLASSING_RESTRICTED
#endif // #if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#endif // #ifndef IGLK_SUBCLASSING_RESTRICTED

#ifndef IGLK_UNAVAILABLE
#define IGLK_UNAVAILABLE(message) __attribute__((unavailable(message)))
#endif // #ifndef IGLK_UNAVAILABLE

#if IGLK_LOGGING_ENABLED
#define IGLKLog( s, ... ) do { NSLog( @"IGListKit: %@", [NSString stringWithFormat: (s), ##__VA_ARGS__] ); } while(0)
#else
#define IGLKLog( s, ... )
#endif

#ifndef IGLK_DEBUG_DESCRIPTION_ENABLED
#define IGLK_DEBUG_DESCRIPTION_ENABLED DEBUG
#endif // #ifndef IGLK_DEBUG_DESCRIPTION_ENABLED
