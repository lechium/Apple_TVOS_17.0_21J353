//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_LSLazyPropertyList.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _LSDictionaryBackedPropertyList : _LSLazyPropertyList
{
    NSDictionary *_plist;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000e5d29
- (void).cxx_destruct;	// IMP=0x00000000000e5e37
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e5d5b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e5d31
- (_Bool)_getValue:(id *)arg1 forPropertyListKey:(id)arg2;	// IMP=0x00000000000e5ce5
- (_Bool)_getPropertyList:(id *)arg1;	// IMP=0x00000000000e5cbc
- (id)initWithPropertyList:(id)arg1;	// IMP=0x00000000000e5c16

@end

