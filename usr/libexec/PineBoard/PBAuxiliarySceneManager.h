//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface PBAuxiliarySceneManager : NSObject
{
    NSMutableDictionary *_presenters;	// 8 = 0x8
    NSMutableDictionary *_trackedSceneIdentifiers;	// 16 = 0x10
}

+ (_Bool)canProcessSceneRequestWithOptions:(id)arg1 forWorkspace:(id)arg2;	// IMP=0x00200000000f8002
- (void).cxx_destruct;	// IMP=0x00200000000f9f18
@property(retain, nonatomic) NSMutableDictionary *trackedSceneIdentifiers; // @synthesize trackedSceneIdentifiers=_trackedSceneIdentifiers;
@property(retain, nonatomic) NSMutableDictionary *presenters; // @synthesize presenters=_presenters;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;	// IMP=0x00100000000f9dd6
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;	// IMP=0x00100000000f9bec
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;	// IMP=0x00100000000f9a2a
- (void)destroyScenesWithPersistentIdentifiers:(id)arg1 forProcess:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f8f89
- (_Bool)createdSceneForProcess:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f80cb
- (void)registerPresenter:(id)arg1 forActivityType:(id)arg2;	// IMP=0x00100000000f80b4
- (void)dealloc;	// IMP=0x00100000000f7f8d
- (id)init;	// IMP=0x00100000000f7ed7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

