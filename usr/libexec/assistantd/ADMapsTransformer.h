//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADMapsTransformer : NSObject
{
}

- (id)aceCommandForSiriResponse:(id)arg1 responseError:(id)arg2 forRequestCommand:(id)arg3;	// IMP=0x00200000000fce85
- (void)getSiriRequestForClientBoundAceCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fce25

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
