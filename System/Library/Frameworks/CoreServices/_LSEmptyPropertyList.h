//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_LSLazyPropertyList.h"

__attribute__((visibility("hidden")))
@interface _LSEmptyPropertyList : _LSLazyPropertyList
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00800000000e5bba
+ (id)sharedInstance;	// IMP=0x00800000000e5b37
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e5bc8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e5bc2
- (_Bool)_getValue:(id *)arg1 forPropertyListKey:(id)arg2;	// IMP=0x00000000000e5bab
- (_Bool)_getPropertyList:(id *)arg1;	// IMP=0x00000000000e5b99
- (id)uncheckedObjectsForKeys:(id)arg1;	// IMP=0x00000000000e5b8c

@end

