//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDMediaDestinationControllerFailureLogEvent
{
    NSString *_destinationControllerErrorCode;	// 24 = 0x18
    NSString *_errorCode;	// 32 = 0x20
    NSString *_errorDomain;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000006cc6ac
@property(readonly, copy) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(readonly, copy) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(readonly, copy) NSString *destinationControllerErrorCode; // @synthesize destinationControllerErrorCode=_destinationControllerErrorCode;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithDestinationControllerErrorCode:(id)arg1 errorCode:(id)arg2 errorDomain:(id)arg3 isTriggeredOnControllerDevice:(id)arg4 userPrivilege:(id)arg5;	// IMP=0x00000000006cc394

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

