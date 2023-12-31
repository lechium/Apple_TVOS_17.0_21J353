//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSOperationDependencies, CKOperationGroup, NSString;
@protocol OctagonStateString;

@interface CKKSFixupRefetchAllCurrentItemPointers
{
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    NSString<OctagonStateString> *_nextState;	// 24 = 0x18
    CKKSOperationDependencies *_deps;	// 32 = 0x20
    CKOperationGroup *_group;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000015adfd
@property(retain) CKOperationGroup *group; // @synthesize group=_group;
@property(retain) CKKSOperationDependencies *deps; // @synthesize deps=_deps;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
- (void)groupStart;	// IMP=0x001000000015ab18
- (id)description;	// IMP=0x001000000015aa8b
- (id)initWithOperationDependencies:(id)arg1 ckoperationGroup:(id)arg2;	// IMP=0x001000000015a9bd

@end

