//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperation, NSString, OTDeviceInformation, OTEscrowMoveRequestContext, OTOperationDependencies;
@protocol OctagonStateString;

@interface OTCheckHealthOperation
{
    _Bool _skipRateLimitingCheck;	// 10 = 0xa
    _Bool _repair;	// 11 = 0xb
    _Bool _postRepairCFU;	// 12 = 0xc
    _Bool _postEscrowCFU;	// 13 = 0xd
    _Bool _resetOctagon;	// 14 = 0xe
    _Bool _leaveTrust;	// 15 = 0xf
    _Bool _requiresEscrowCheck;	// 16 = 0x10
    NSString<OctagonStateString> *_intendedState;	// 24 = 0x18
    NSString<OctagonStateString> *_nextState;	// 32 = 0x20
    OTDeviceInformation *_deviceInfo;	// 40 = 0x28
    OTEscrowMoveRequestContext *_moveRequest;	// 48 = 0x30
    OTOperationDependencies *_deps;	// 56 = 0x38
    NSOperation *_finishOp;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000003e1e5
@property _Bool requiresEscrowCheck; // @synthesize requiresEscrowCheck=_requiresEscrowCheck;
@property(retain) NSOperation *finishOp; // @synthesize finishOp=_finishOp;
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
@property(retain) OTEscrowMoveRequestContext *moveRequest; // @synthesize moveRequest=_moveRequest;
@property _Bool leaveTrust; // @synthesize leaveTrust=_leaveTrust;
@property _Bool resetOctagon; // @synthesize resetOctagon=_resetOctagon;
@property _Bool postEscrowCFU; // @synthesize postEscrowCFU=_postEscrowCFU;
@property _Bool postRepairCFU; // @synthesize postRepairCFU=_postRepairCFU;
@property _Bool repair; // @synthesize repair=_repair;
@property _Bool skipRateLimitingCheck; // @synthesize skipRateLimitingCheck=_skipRateLimitingCheck;
@property(retain) OTDeviceInformation *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
- (void)handleRepairSuggestions:(_Bool)arg1 postEscrowCFU:(_Bool)arg2 resetOctagon:(_Bool)arg3 leaveTrust:(_Bool)arg4 moveRequest:(id)arg5;	// IMP=0x001000000003de3a
- (void)groupStart;	// IMP=0x001000000003d3bc
- (_Bool)checkIfPasscodeIsSetForDevice;	// IMP=0x001000000003d3b4
- (id)initWithDependencies:(id)arg1 intendedState:(id)arg2 errorState:(id)arg3 deviceInfo:(id)arg4 skipRateLimitedCheck:(_Bool)arg5 repair:(_Bool)arg6;	// IMP=0x001000000003d299

@end

