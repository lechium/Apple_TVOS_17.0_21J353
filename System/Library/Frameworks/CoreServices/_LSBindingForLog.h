//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _LSDatabase;

__attribute__((visibility("hidden")))
@interface _LSBindingForLog : NSObject
{
    _LSDatabase *_db;	// 8 = 0x8
    struct LSBinding _binding;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x0000000000059d95
- (void).cxx_destruct;	// IMP=0x0000000000059d64
- (id)redactedDescription;	// IMP=0x0000000000059d19
- (id)description;	// IMP=0x0000000000059c3e
- (id)initWithState:(const void *)arg1 binding:(const struct LSBinding *)arg2;	// IMP=0x0000000000059bb7

@end
