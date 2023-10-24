//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVSettingsPreferenceKeyValue : NSObject
{
    struct __CFString *_domain;	// 8 = 0x8
    struct __CFArray *_domains;	// 16 = 0x10
    struct __CFString *_containerPath;	// 24 = 0x18
    struct __CFString *_key;	// 32 = 0x20
}

@property(readonly, nonatomic) NSString *key;
@property(nonatomic) id value;
- (void)dealloc;	// IMP=0x00100000000ad9d3
- (id)initWithDomain:(id)arg1 key:(id)arg2 containerPath:(id)arg3;	// IMP=0x00100000000ad8d8

@end

