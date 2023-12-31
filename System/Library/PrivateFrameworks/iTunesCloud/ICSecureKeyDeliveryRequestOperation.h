//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ICAsyncOperation.h"

@class ICSecureKeyDeliveryRequest;

__attribute__((visibility("hidden")))
@interface ICSecureKeyDeliveryRequestOperation : ICAsyncOperation
{
    ICSecureKeyDeliveryRequest *_request;	// 8 = 0x8
    CDUnknownBlockType _responseHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001d05d0
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) ICSecureKeyDeliveryRequest *request; // @synthesize request=_request;
- (void)_createServerPlaybackContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001d037a
- (id)_createPodcastLicenseProtocolRequestBodyUsingPlaybackContextData:(id)arg1;	// IMP=0x00000000001d0120
- (id)_createSimplifiedProtocolRequestBodyUsingPlaybackContextData:(id)arg1;	// IMP=0x00000000001cfe95
- (id)_createDefaultProtocolRequestBodyUsingPlaybackContextData:(id)arg1;	// IMP=0x00000000001cfad9
- (void)execute;	// IMP=0x00000000001cf509

@end

