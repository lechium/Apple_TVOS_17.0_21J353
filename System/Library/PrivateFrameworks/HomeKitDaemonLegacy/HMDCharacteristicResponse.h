//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCharacteristicRequest, NSData, NSDate, NSError, NSNumber;

__attribute__((visibility("hidden")))
@interface HMDCharacteristicResponse : HMFObject
{
    HMDCharacteristicRequest *_request;	// 8 = 0x8
    id _value;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    NSNumber *_stateNumber;	// 32 = 0x20
    NSDate *_valueUpdatedTime;	// 40 = 0x28
    NSData *_notificationContext;	// 48 = 0x30
}

+ (id)responsesWithRequests:(id)arg1 characteristicUpdateDictionary:(id)arg2;	// IMP=0x0060000000b4f6f3
+ (id)responseWithRequest:(id)arg1 characteristicUpdateDictionary:(id)arg2;	// IMP=0x0060000000b4f56d
+ (id)responsesWithRequests:(id)arg1 error:(id)arg2;	// IMP=0x0060000000b4f370
+ (id)responseWithRequest:(id)arg1 error:(id)arg2;	// IMP=0x0060000000b4f302
- (void).cxx_destruct;	// IMP=0x0000000000b4f28d
@property(readonly, nonatomic) NSData *notificationContext; // @synthesize notificationContext=_notificationContext;
@property(readonly, nonatomic) NSDate *valueUpdatedTime; // @synthesize valueUpdatedTime=_valueUpdatedTime;
@property(readonly, nonatomic) NSNumber *stateNumber; // @synthesize stateNumber=_stateNumber;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) HMDCharacteristicRequest *request; // @synthesize request=_request;
- (id)attributeDescriptions;	// IMP=0x0000000000b4ec62
- (id)characteristicUpdateDictionary;	// IMP=0x0000000000b4e7dd
- (void)setValue:(id)arg1 updatedTime:(id)arg2 stateNumber:(id)arg3 notificationContext:(id)arg4;	// IMP=0x0000000000b4e67d
- (id)initWithRequest:(id)arg1 error:(id)arg2;	// IMP=0x0000000000b4e57f

@end
