//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURLRequest;

__attribute__((visibility("hidden")))
@interface MGRemoteQueryServerHandlerPing : NSObject
{
    _Bool _replied;	// 8 = 0x8
    NSURLRequest *_request;	// 16 = 0x10
    NSData *_responsePayload;	// 24 = 0x18
}

+ (id)handlerForRequest:(id)arg1;	// IMP=0x001000000000b05c
+ (id)urlPath;	// IMP=0x001000000000b04b
- (void).cxx_destruct;	// IMP=0x000000000000b398
@property(nonatomic) _Bool replied; // @synthesize replied=_replied;
@property(retain, nonatomic) NSData *responsePayload; // @synthesize responsePayload=_responsePayload;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void)provideResponseData:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b2d0
- (int)prepareResponse:(id)arg1;	// IMP=0x000000000000b167
- (_Bool)validateRequest;	// IMP=0x000000000000b0a5
@property(readonly, copy) NSString *description;
- (id)_initWithRequest:(id)arg1;	// IMP=0x000000000000af6f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

