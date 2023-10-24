//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSAuditToken, FBSOpenApplicationOptions, FBSSceneIdentity, NSString, PBAppInfo, PBApplication;

@interface PBOpenApplicationRequest : NSObject
{
    _Bool _trustedRequest;	// 8 = 0x8
    _Bool _hasBrowsingWebAction;	// 9 = 0x9
    PBApplication *_fromApplication;	// 16 = 0x10
    PBApplication *_sourceApplication;	// 24 = 0x18
    PBAppInfo *_toAppInfo;	// 32 = 0x20
    long long _launchIntent;	// 40 = 0x28
    FBSOpenApplicationOptions *_openApplicationOptions;	// 48 = 0x30
    BSAuditToken *_auditToken;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00100000000cf65c
@property(readonly, nonatomic) _Bool hasBrowsingWebAction; // @synthesize hasBrowsingWebAction=_hasBrowsingWebAction;
@property(readonly, nonatomic, getter=isTrustedRequest) _Bool trustedRequest; // @synthesize trustedRequest=_trustedRequest;
@property(readonly, nonatomic) BSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic) FBSOpenApplicationOptions *openApplicationOptions; // @synthesize openApplicationOptions=_openApplicationOptions;
@property(readonly, nonatomic) long long launchIntent; // @synthesize launchIntent=_launchIntent;
@property(readonly, nonatomic) PBAppInfo *toAppInfo; // @synthesize toAppInfo=_toAppInfo;
@property(readonly, nonatomic) PBApplication *sourceApplication; // @synthesize sourceApplication=_sourceApplication;
@property(readonly, nonatomic) PBApplication *fromApplication; // @synthesize fromApplication=_fromApplication;
- (id)_makeTransitionPayload;	// IMP=0x00100000000cf3e7
- (id)_payloadSourceApplication;	// IMP=0x00100000000cf2f4
- (_Bool)_shouldSendPayloadSourceApplication;	// IMP=0x00100000000cf200
- (id)_makeTransitionActions;	// IMP=0x00100000000cee2a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000cedcd
- (unsigned long long)hash;	// IMP=0x00100000000ced09
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000ceabb
- (id)debugDescription;	// IMP=0x00100000000ce8f7
- (id)description;	// IMP=0x00100000000ce80a
- (id)makeSceneTransitionContext;	// IMP=0x00100000000ce5f0
- (id)makeProcessExecutionContext;	// IMP=0x00100000000ce3a0
@property(readonly, nonatomic) NSString *launchReason;
@property(readonly, nonatomic) _Bool relaunchingForUserProfileSwitch;
@property(readonly, nonatomic) _Bool shouldAnimatedLayout;
@property(readonly, nonatomic) _Bool hasPayloadURL;
@property(readonly, nonatomic) _Bool waitForDebugger;
@property(readonly, nonatomic, getter=isDebugging) _Bool debugging;
@property(readonly, nonatomic, getter=isLaunchedByDeactivation) _Bool launchedByDeactivation;
@property(readonly, nonatomic, getter=isLaunchedOverSiri) _Bool launchedOverSiri;
@property(readonly, nonatomic, getter=isForeground) _Bool foreground;
@property(readonly, nonatomic) FBSSceneIdentity *toSceneIdentity;
@property(readonly, nonatomic) FBSSceneIdentity *fromSceneIdentity;
@property(readonly, nonatomic) PBAppInfo *fromAppInfo;
- (id)initWithOpenApplicationOptions:(id)arg1 trustedRequest:(_Bool)arg2 toAppInfo:(id)arg3 fromApplication:(id)arg4 sourceApplication:(id)arg5 sourceAuditToken:(id)arg6;	// IMP=0x00100000000cdbe0
- (id)initWithSystemServiceRequest:(id)arg1 toAppInfo:(id)arg2 fromApplication:(id)arg3 sourceApplication:(id)arg4;	// IMP=0x00100000000cda94
@property(readonly, nonatomic) _Bool enforceDeepLinking;

@end
