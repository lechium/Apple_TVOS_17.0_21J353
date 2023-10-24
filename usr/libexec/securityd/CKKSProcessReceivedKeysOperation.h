//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSOperationDependencies, NSString;
@protocol OctagonStateString;

@interface CKKSProcessReceivedKeysOperation
{
    _Bool _allowFullRefetchResult;	// 8 = 0x8
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    NSString<OctagonStateString> *_nextState;	// 24 = 0x18
    CKKSOperationDependencies *_deps;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000019a897
@property _Bool allowFullRefetchResult; // @synthesize allowFullRefetchResult=_allowFullRefetchResult;
@property(retain) CKKSOperationDependencies *deps; // @synthesize deps=_deps;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
- (id)checkExistingKeyHierarchy:(id)arg1 zoneID:(id)arg2 currentTrustStates:(id)arg3 error:(id *)arg4;	// IMP=0x001000000019965d
- (id)processRemoteKeys:(id)arg1 viewState:(id)arg2 currentTrustStates:(id)arg3 error:(id *)arg4;	// IMP=0x00100000001974f5
- (void)main;	// IMP=0x0010000000196dd9
- (id)initWithDependencies:(id)arg1 allowFullRefetchResult:(_Bool)arg2 intendedState:(id)arg3 errorState:(id)arg4;	// IMP=0x0010000000196d00

@end

