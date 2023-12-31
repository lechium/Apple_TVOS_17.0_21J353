//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAHACommand.h>

@class HMDAssistantCommandHelper, HMDAssistantGather, HMDHome, HMDHomeManager, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAssistantCommand : SAHACommand
{
    _Bool _completionHandlerCalled;	// 8 = 0x8
    HMDHomeManager *_homeManager;	// 16 = 0x10
    HMDAssistantGather *_gather;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSArray *_homeKitObjects;	// 40 = 0x28
    long long _numberOfHomes;	// 48 = 0x30
    NSString *_primaryHomeName;	// 56 = 0x38
    NSString *_primaryHomeAssistantIdentifier;	// 64 = 0x40
    NSString *_currentHomeName;	// 72 = 0x48
    NSString *_currentHomeAssistantIdentifier;	// 80 = 0x50
    HMDAssistantCommandHelper *_assistantCommandHelper;	// 88 = 0x58
    HMDHome *_home;	// 96 = 0x60
    unsigned long long _startTime;	// 104 = 0x68
}

+ (void)initialize;	// IMP=0x00100000001d73ea
+ (id)logCategory;	// IMP=0x00100000001d73ba
- (void).cxx_destruct;	// IMP=0x00000000001f13d0
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) HMDHome *home; // @synthesize home=_home;
@property(nonatomic) _Bool completionHandlerCalled; // @synthesize completionHandlerCalled=_completionHandlerCalled;
@property(retain, nonatomic) HMDAssistantCommandHelper *assistantCommandHelper; // @synthesize assistantCommandHelper=_assistantCommandHelper;
@property(retain, nonatomic) NSString *currentHomeAssistantIdentifier; // @synthesize currentHomeAssistantIdentifier=_currentHomeAssistantIdentifier;
@property(retain, nonatomic) NSString *currentHomeName; // @synthesize currentHomeName=_currentHomeName;
@property(retain, nonatomic) NSString *primaryHomeAssistantIdentifier; // @synthesize primaryHomeAssistantIdentifier=_primaryHomeAssistantIdentifier;
@property(retain, nonatomic) NSString *primaryHomeName; // @synthesize primaryHomeName=_primaryHomeName;
@property(nonatomic) long long numberOfHomes; // @synthesize numberOfHomes=_numberOfHomes;
@property(retain, nonatomic) NSArray *homeKitObjects; // @synthesize homeKitObjects=_homeKitObjects;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) HMDAssistantGather *gather; // @synthesize gather=_gather;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (void)timeoutAndReportResults;	// IMP=0x00000000001f11b5
- (void)performWithGather:(id)arg1 queue:(id)arg2 msgDispatcher:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001f0943
- (void)handleGetColor:(id)arg1 forObjects:(id)arg2 serviceType:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001efa26
- (void)handleSetColor:(id)arg1 forObjects:(id)arg2 service:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001eeb2d
- (id)readRequestsForCharacteristic:(id)arg1;	// IMP=0x00000000001ee82b
- (id)addStatusCharacteristicsIfNeeded:(id)arg1;	// IMP=0x00000000001ee240
- (void)addLinkedServiceCharacteristicsFor:(id)arg1 toCollection:(id)arg2 assistantObjects:(id)arg3;	// IMP=0x00000000001eddf2
- (void)addBridgedAccessoryCharacteristicsFor:(id)arg1 toCollection:(id)arg2 assistantObjects:(id)arg3;	// IMP=0x00000000001ed85b
- (id)addCharacteristicsFromRelatedServicesFor:(id)arg1 assistantObjects:(id)arg2;	// IMP=0x00000000001ed64a
- (void)addCharacteristicWithType:(id)arg1 fromService:(id)arg2 toCollection:(id)arg3 assistantObjects:(id)arg4;	// IMP=0x00000000001ed539
- (void)addActivationCharacteristicsIfNeeded:(id)arg1 forCharacteristic:(id)arg2;	// IMP=0x00000000001ed210
- (void)addIfNeededActivationCharacteristic:(id)arg1 fromService:(id)arg2 toCollection:(id)arg3;	// IMP=0x00000000001ecfc7
- (void)handleMediaReadWriteResponse:(id)arg1 forAction:(id)arg2 inServiceType:(id)arg3 inHome:(id)arg4 requestProperty:(id)arg5 results:(id)arg6 forObjects:(id)arg7;	// IMP=0x00000000001ec8b0
- (id)handleReadWriteResponses:(id)arg1 error:(id)arg2 forAction:(id)arg3 inServiceType:(id)arg4 results:(id)arg5 forObjects:(id)arg6;	// IMP=0x00000000001ebc03
- (_Bool)populateColorResult:(id)arg1 serviceType:(id)arg2 service:(id)arg3 action:(id)arg4 responses:(id)arg5 forObjects:(id)arg6;	// IMP=0x00000000001eb1be
- (id)parseColorEncoding:(id)arg1;	// IMP=0x00000000001e9e55
- (void)handleCommandWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001e8ba2
- (void)_handleCommandForHAPAction:(id)arg1 serviceType:(id)arg2 objects:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001e86bb
- (void)_handleCommandForMediaAccessoryAction:(id)arg1 objects:(id)arg2 serviceType:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001e8362
- (void)handleUpdateActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001e6a63
- (id)updateValue:(id)arg1 forAction:(id)arg2;	// IMP=0x00000000001e63c2
- (id)updateValueToBoundary:(id)arg1 valueType:(id)arg2 fudgeMinimum:(_Bool)arg3 metadata:(id)arg4;	// IMP=0x00000000001e60ad
- (void)handleSetActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001e44fb
- (void)handleSetNaturalLightingAction:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001e3a17
- (void)handleGetNaturalLightingAction:(id)arg1 forObjects:(id)arg2 serviceType:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001e334a
- (id)compareForBoundary:(id)arg1 withMetadata:(id)arg2;	// IMP=0x00000000001e31c0
- (id)compareCurrentValue:(id)arg1 newValue:(id)arg2 withMetadata:(id)arg3;	// IMP=0x00000000001e2fb8
- (void)handleGetActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001e2022
- (void)handleMediaAccessorySetActionType:(id)arg1 forObjects:(id)arg2 withServiceType:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001e1545
- (_Bool)populateResult:(id)arg1 fromResponse:(id)arg2 responses:(id)arg3 forAction:(id)arg4 serviceType:(id)arg5 forObjects:(id)arg6;	// IMP=0x00000000001e0b76
- (void)handleGetMetadataActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001e0226
- (void)executeActionSet:(id)arg1 action:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001dfcdb
- (id)actionOutcomeFromError:(id)arg1;	// IMP=0x00000000001dfb15
- (void)returnResults:(id)arg1 serviceType:(id)arg2 forAction:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001df876
- (void)reportUnlockRequired:(CDUnknownBlockType)arg1;	// IMP=0x00000000001df7ee
- (void)reportResults:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001df71d
- (void)reportOutcome:(id)arg1 results:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001df19d
- (void)_logEvent:(id)arg1;	// IMP=0x00000000001deb9e
- (id)filterObjects:(id)arg1 forCharacteristics:(id)arg2;	// IMP=0x00000000001de6af
- (id)filterObjects:(id)arg1 forCharacteristicTypes:(id)arg2;	// IMP=0x00000000001de112
- (id)objectsWithSearchFilter:(id)arg1 inHome:(id)arg2 serviceTypeIsATV:(_Bool)arg3 overrideServiceTypeIfNeeded:(id *)arg4;	// IMP=0x00000000001dc959
- (id)_homeWithSearchFilter:(id)arg1;	// IMP=0x00000000001dc42a
- (id)_evaluateHomeOptionallyMatchingHomeName:(id)arg1;	// IMP=0x00000000001dbfdd
- (id)filteredObjectsFromObjects:(id)arg1 byCharacteristicType:(id)arg2;	// IMP=0x00000000001dbd51
- (id)filteredObjectsFromObjects:(id)arg1 byAttribute:(id)arg2 forActionType:(id)arg3;	// IMP=0x00000000001db474
- (id)filteredObjectsFromObjects:(id)arg1 forGroup:(id)arg2;	// IMP=0x00000000001db266
- (id)filteredObjectsFromObjects:(id)arg1 forHomeName:(id)arg2 roomName:(id)arg3 zoneName:(id)arg4;	// IMP=0x00000000001dabce
- (id)objectsWithIdentifierList:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001da8a9
- (id)adjustGetValue:(id)arg1 type:(id)arg2 units:(id)arg3 attribute:(id)arg4;	// IMP=0x00000000001da68b
- (id)adjustSetValue:(id)arg1 type:(id)arg2 units:(id)arg3 attribute:(id)arg4;	// IMP=0x00000000001da46b
- (_Bool)isAttributeValue:(id)arg1 equalTo:(id)arg2;	// IMP=0x00000000001da226
- (id)getValueOfType:(id)arg1 action:(id)arg2;	// IMP=0x00000000001da02e
- (id)getLocaleUnits:(id)arg1;	// IMP=0x00000000001d9f89
- (id)actionResultForCharacteristic:(id)arg1 actionSet:(id)arg2 action:(id)arg3 objects:(id)arg4 error:(id)arg5;	// IMP=0x00000000001d999d
- (id)actionResultForMediaProfile:(id)arg1 action:(id)arg2 objects:(id)arg3 error:(id)arg4;	// IMP=0x00000000001d9644
- (id)failedActionResultsFromResponse:(id)arg1 inActionSet:(id)arg2 withAction:(id)arg3;	// IMP=0x00000000001d8c40
- (id)entityFromActionSet:(id)arg1;	// IMP=0x00000000001d8b02
- (_Bool)populateMediaProfileWriteResult:(id)arg1 withValue:(id)arg2 serviceType:(id)arg3 action:(id)arg4;	// IMP=0x00000000001d891b
- (_Bool)populateResultWithEntity:(id)arg1 action:(id)arg2 entity:(id)arg3;	// IMP=0x00000000001d8882
- (_Bool)populateResult:(id)arg1 withObject:(id)arg2 serviceType:(id)arg3 action:(id)arg4;	// IMP=0x00000000001d86a3
- (_Bool)populateResult:(id)arg1 withService:(id)arg2 serviceType:(id)arg3 characteristic:(id)arg4 resultAttribute:(id)arg5 action:(id)arg6;	// IMP=0x00000000001d77cb
- (id)mediaProfileFromObject:(id)arg1;	// IMP=0x00000000001d76d6
- (id)serviceFromObject:(id)arg1;	// IMP=0x00000000001d7604

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

