//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface ASSyncConfiguration : NSObject
{
    NSString *_syncKey;	// 8 = 0x8
    NSData *_configPlistData;	// 16 = 0x10
    _Bool _attemptedPlistOpen;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000037e6
- (void)_tryGettingPlistData;	// IMP=0x001000000000369b
- (id)configurationInfoForKey:(id)arg1;	// IMP=0x0010000000003624
- (id)init;	// IMP=0x0010000000003616
- (id)initWithConfigurationPlistForSyncKey:(id)arg1;	// IMP=0x00100000000035a3

@end

