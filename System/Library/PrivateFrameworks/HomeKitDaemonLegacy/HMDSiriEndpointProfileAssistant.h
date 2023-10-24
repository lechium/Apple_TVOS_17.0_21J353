//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDService, NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDSiriEndpointProfileAssistant : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSNumber *_identifier;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSNumber *_active;	// 32 = 0x20
    HMDService *_service;	// 40 = 0x28
}

+ (id)shortDescription;	// IMP=0x00100000009af7e1
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000009af7d9
+ (id)logCategory;	// IMP=0x00100000009af7cf
- (void).cxx_destruct;	// IMP=0x00000000009af77c
@property(readonly) HMDService *service; // @synthesize service=_service;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000009af6b2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000009af5c6
- (_Bool)updateCharacteristic:(id)arg1 value:(id)arg2;	// IMP=0x00000000009af2f2
- (_Bool)containsCharacteristic:(id)arg1;	// IMP=0x00000000009aefcc
@property(readonly) NSArray *allCharacteristics;
@property(readonly) NSArray *characteristicsToMonitor;
@property(copy) NSNumber *active; // @synthesize active=_active;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSNumber *identifier; // @synthesize identifier=_identifier;
- (id)_activeCharacteristic;	// IMP=0x00000000009aeb67
- (id)_nameCharacteristic;	// IMP=0x00000000009aeb0d
- (id)_identifierCharacteristic;	// IMP=0x00000000009aeab3
- (id)initWithService:(id)arg1;	// IMP=0x00000000009aea45

@end
