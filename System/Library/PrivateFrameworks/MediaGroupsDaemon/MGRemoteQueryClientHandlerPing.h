//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MGRemoteQueryClientHandlerPing : NSObject
{
}

+ (id)handler;	// IMP=0x0010000000001d43
- (id)handleCompleteResponse:(id)arg1 jsonPayload:(id)arg2;	// IMP=0x0000000000001dff
- (void)prepareRequest:(id)arg1;	// IMP=0x0000000000001de2
- (void)prepareURL:(id)arg1;	// IMP=0x0000000000001dc6
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
