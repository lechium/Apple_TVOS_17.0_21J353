//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDMediaPropertyRequest, NSDate, NSError;

__attribute__((visibility("hidden")))
@interface HMDMediaPropertyResponse : HMFObject
{
    HMDMediaPropertyRequest *_request;	// 8 = 0x8
    id _value;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    NSDate *_valueUpdatedTime;	// 32 = 0x20
}

+ (id)responseWithRequest:(id)arg1 value:(id)arg2 updatedTime:(id)arg3;	// IMP=0x0060000000b714f7
+ (id)responseWithRequest:(id)arg1 error:(id)arg2;	// IMP=0x0060000000b71489
+ (id)responsesFromSerializedResponse:(id)arg1 requests:(id)arg2 home:(id)arg3;	// IMP=0x0060000000b70c65
+ (id)serializeResponses:(id)arg1;	// IMP=0x0060000000b7057b
+ (id)groupedProfileResponses:(id)arg1;	// IMP=0x0060000000b70231
+ (id)propertyResponsesFromRequests:(id)arg1 error:(id)arg2;	// IMP=0x0060000000b70019
- (void).cxx_destruct;	// IMP=0x0000000000b6ffc6
@property(readonly, nonatomic) NSDate *valueUpdatedTime; // @synthesize valueUpdatedTime=_valueUpdatedTime;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) HMDMediaPropertyRequest *request; // @synthesize request=_request;
- (id)description;	// IMP=0x0000000000b6feb1
- (id)initWithRequest:(id)arg1 value:(id)arg2 updatedTime:(id)arg3;	// IMP=0x0000000000b6fdcd
- (id)initWithRequest:(id)arg1 error:(id)arg2;	// IMP=0x0000000000b6fd2b

@end

