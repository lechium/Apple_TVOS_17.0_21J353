//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _PBUserPresentationUIProvider : NSObject
{
    NSString *_serviceName;	// 8 = 0x8
    NSString *_className;	// 16 = 0x10
    CDUnknownBlockType _prepareHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000016317c
@property(readonly, copy, nonatomic) CDUnknownBlockType prepareHandler; // @synthesize prepareHandler=_prepareHandler;
@property(readonly, copy, nonatomic) NSString *className; // @synthesize className=_className;
@property(readonly, copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)prepareUIForSystemOverlayPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000162ed7
@property(readonly, nonatomic) NSString *providerIdentifier;
- (id)initWithServiceName:(id)arg1 className:(id)arg2 viewServicePrepareHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000162dad

@end

