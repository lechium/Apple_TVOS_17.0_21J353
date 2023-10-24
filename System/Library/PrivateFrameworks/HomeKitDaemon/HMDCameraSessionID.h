//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraSessionID : HMFObject
{
    _Bool _spiClient;	// 8 = 0x8
    NSString *_description;	// 16 = 0x10
    NSString *_sessionID;	// 24 = 0x18
    NSString *_hostProcessBundleIdentifier;	// 32 = 0x20
    NSMutableDictionary *_milestones;	// 40 = 0x28
    NSString *_deviceSectionName;	// 48 = 0x30
    NSMutableDictionary *_deviceMilestones;	// 56 = 0x38
}

+ (id)millisecondsSince1970;	// IMP=0x0010000000bd9a88
+ (id)hostProcessBundleIdentifierForMessage:(id)arg1;	// IMP=0x0010000000bd993b
- (void).cxx_destruct;	// IMP=0x0000000000bd98c6
@property(readonly) NSMutableDictionary *deviceMilestones; // @synthesize deviceMilestones=_deviceMilestones;
@property(readonly) NSString *deviceSectionName; // @synthesize deviceSectionName=_deviceSectionName;
@property(readonly) NSMutableDictionary *milestones; // @synthesize milestones=_milestones;
@property(readonly, getter=isSPIClient) _Bool spiClient; // @synthesize spiClient=_spiClient;
@property(readonly, copy) NSString *hostProcessBundleIdentifier; // @synthesize hostProcessBundleIdentifier=_hostProcessBundleIdentifier;
@property(readonly) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (id)description;	// IMP=0x0000000000bd9830
- (void)addParameterFor:(id)arg1 value:(id)arg2;	// IMP=0x0000000000bd96da
- (void)setParameterForPath:(id)arg1 value:(id)arg2;	// IMP=0x0000000000bd95f0
- (void)setParameterFor:(id)arg1 value:(id)arg2;	// IMP=0x0000000000bd9565
- (void)markMilestoneForPath:(id)arg1;	// IMP=0x0000000000bd93dc
- (void)markMilestoneFor:(id)arg1;	// IMP=0x0000000000bd9342
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bd923e
- (unsigned long long)hash;	// IMP=0x0000000000bd91fa
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bd913c
- (id)initWithSessionID:(id)arg1 hostProcessBundleIdentifier:(id)arg2 isSPIClient:(_Bool)arg3 deviceSectionName:(id)arg4 description:(id)arg5;	// IMP=0x0000000000bd8f95
- (id)initWithSessionID:(id)arg1 message:(id)arg2 description:(id)arg3;	// IMP=0x0000000000bd8e5e

@end

