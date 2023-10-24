//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSAuditToken, NSString;
@protocol PBSPictureInPictureServiceClientInterface;

@interface PBPictureInPictureService : NSObject
{
    id <PBSPictureInPictureServiceClientInterface> _serviceClient;	// 8 = 0x8
    NSString *_clientBundleIdentifier;	// 16 = 0x10
    BSAuditToken *_auditToken;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000191427
@property(readonly, nonatomic) BSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property __weak id <PBSPictureInPictureServiceClientInterface> serviceClient; // @synthesize serviceClient=_serviceClient;
- (void)pictureInPictureManager:(id)arg1 didSendPlaybackCommand:(unsigned long long)arg2;	// IMP=0x0010000000191374
- (void)pictureInPictureManager:(id)arg1 didUpdateState:(id)arg2;	// IMP=0x001000000019130c
- (oneway void)expandPictureInPicture;	// IMP=0x0010000000191292
- (oneway void)movePictureInPicture;	// IMP=0x0010000000191234
- (oneway void)cancelPictureInPictureFromPlayerInterface:(id)arg1;	// IMP=0x0010000000191169
- (void)fetchCurrentPictureInPictureStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000191077
- (void)invalidate;	// IMP=0x0010000000190fe3
- (void)dealloc;	// IMP=0x0010000000190f6e
- (id)initWithClientBundleIdentifier:(id)arg1 auditToken:(id)arg2;	// IMP=0x0010000000190e87

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

