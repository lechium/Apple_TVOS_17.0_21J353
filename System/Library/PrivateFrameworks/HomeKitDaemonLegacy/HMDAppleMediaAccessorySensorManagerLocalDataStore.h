//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessorySensorManagerLocalDataStore : NSObject
{
    NSUserDefaults *_defaults;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000071add0
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
- (void)fetchSensorUUIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000071acfc
- (void)saveSensorUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000071ac3e
- (void)saveSensorUUID:(id)arg1;	// IMP=0x000000000071ac2a
- (id)initWithUserDefaults:(id)arg1;	// IMP=0x000000000071abc2
- (id)init;	// IMP=0x000000000071ab68

@end

