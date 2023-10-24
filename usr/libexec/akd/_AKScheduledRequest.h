//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKDispatchingCalculation, NSDictionary;
@protocol AKDispatchableRequest;

@interface _AKScheduledRequest : NSObject
{
    AKDispatchingCalculation *_calculation;	// 8 = 0x8
    id <AKDispatchableRequest> _request;	// 16 = 0x10
    NSDictionary *_info;	// 24 = 0x18
}

+ (id)scheduledRequestWithCalculation:(id)arg1 forRequest:(id)arg2 info:(id)arg3;	// IMP=0x004000000009cc90
- (void).cxx_destruct;	// IMP=0x002000000009cd87
@property(retain, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(retain, nonatomic) id <AKDispatchableRequest> request; // @synthesize request=_request;
@property(retain, nonatomic) AKDispatchingCalculation *calculation; // @synthesize calculation=_calculation;

@end

