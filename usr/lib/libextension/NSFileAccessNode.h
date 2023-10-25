//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileProviderProxy, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NSFileAccessNode : NSObject
{
    NSFileAccessNode *_parent;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_normalizedName;	// 24 = 0x18
    NSFileAccessNode *_symbolicLinkDestination;	// 32 = 0x20
    unsigned long long _symbolicLinkReferenceCount;	// 40 = 0x28
    NSMutableDictionary *_childrenByNormalizedName;	// 48 = 0x30
    id _presenterOrPresenters;	// 56 = 0x38
    NSFileProviderProxy *_provider;	// 64 = 0x40
    id _accessClaimOrClaims;	// 72 = 0x48
    _Bool _isArbitrationBoundary;	// 80 = 0x50
    _Bool _isFilePackageIsFigured;	// 81 = 0x51
    _Bool _isFilePackage;	// 82 = 0x52
    _Bool _symbolicLinkIsFirmlink;	// 83 = 0x53
    NSString *_lastRequestedChildName;	// 88 = 0x58
    NSFileAccessNode *_lastRequestedChild;	// 96 = 0x60
    id _progressPublisherOrPublishers;	// 104 = 0x68
    id _progressSubscriberOrSubscribers;	// 112 = 0x70
}

- (id)subarbiterDescription;	// IMP=0x00000000007ec8fa
- (id)sensitiveSubarbiterDescription;	// IMP=0x00000000007ec8d9
- (id)description;	// IMP=0x00000000007ec8bb
- (id)sensitiveDescription;	// IMP=0x00000000007ec89a
- (id)descriptionWithIndenting:(id)arg1 excludingExcessNodes:(_Bool)arg2 excludingReactors:(_Bool)arg3;	// IMP=0x00000000007ebf98
- (id)_childrenExcludingExcessNodes:(_Bool)arg1 excludingReactors:(_Bool)arg2;	// IMP=0x00000000007ebd9c
- (_Bool)_mayContainCriticalDebuggingInformationExcludingReactors:(_Bool)arg1;	// IMP=0x00000000007ebd46
- (void)assertDescendantsLive;	// IMP=0x00000000007ebcd3
- (void)assertLive;	// IMP=0x00000000007ebc07
- (void)assertDead;	// IMP=0x00000000007ebb37
- (id)parent;	// IMP=0x00000000007ebb2d
- (void)forEachProgressThingOfItemOrContainedItemPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007eb909
- (void)forEachProgressSubscriberOfItemOrContainingItemPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007eb829
- (void)forEachProgressSubscriberOfItemPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007eb703
- (void)forEachProgressPublisherOfItemOrContainedItemPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007eb5bd
- (void)forEachProgressPublisherOfItemPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007eb487
- (void)removeProgressSubscriber:(id)arg1;	// IMP=0x00000000007eb40b
- (void)addProgressSubscriber:(id)arg1;	// IMP=0x00000000007eb372
- (void)removeProgressPublisher:(id)arg1;	// IMP=0x00000000007eb2f6
- (void)addProgressPublisher:(id)arg1;	// IMP=0x00000000007eb25d
- (id)urlOfSubitemAtPath:(id)arg1 plusPath:(id)arg2;	// IMP=0x00000000007eb169
- (id)name;	// IMP=0x00000000007eb15f
- (id)standardizedURL;	// IMP=0x00000000007eb0a7
- (id)pathExceptPrivate;	// IMP=0x00000000007eb013
- (id)url;	// IMP=0x00000000007eaf59
- (void)removeAccessClaim:(id)arg1;	// IMP=0x00000000007eaedd
- (void)addAccessClaim:(id)arg1;	// IMP=0x00000000007eae43
- (void)removeProvider:(id)arg1;	// IMP=0x00000000007eae1c
- (_Bool)setProvider:(id)arg1;	// IMP=0x00000000007eac2e
- (void)removePresenter:(id)arg1;	// IMP=0x00000000007eabb2
- (void)addPresenter:(id)arg1;	// IMP=0x00000000007eab19
- (_Bool)itemIsInItemAtLocation:(id)arg1;	// IMP=0x00000000007eaaff
- (_Bool)itemIsItemAtLocation:(id)arg1;	// IMP=0x00000000007eaab7
- (_Bool)itemIsSubarbitrable;	// IMP=0x00000000007eaa93
- (void)setArbitrationBoundary;	// IMP=0x00000000007eaa89
- (void)forEachAccessClaimOnItemOrContainedItemPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007ea921
- (void)forEachPresenterOfContainingItemPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007ea871
- (void)forEachPresenterOfItemOrContainingItemPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007ea7ba
- (void)forEachPresenterOfItemOrContainedItemPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007ea77d
- (void)forEachPresenterOfContainedItemPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007ea683
- (void)forEachPresenterOfItemPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007ea54d
- (void)forEachPresenterOfContainingFilePackagePerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007ea481
- (id)itemProvider;	// IMP=0x00000000007ea465
- (void)forEachReactorToItemOrContainedItemPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007ea38a
- (void)forEachRelevantAccessClaimPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007ea373
- (void)forEachRelevantAccessClaimForEvaluatingAgainstClaim:(id)arg1 performProcedure:(CDUnknownBlockType)arg2;	// IMP=0x00000000007ea330
- (void)_forEachRelevantAccessClaimExcludingClaimsFromSuperarbiter:(_Bool)arg1 performProcedure:(CDUnknownBlockType)arg2;	// IMP=0x00000000007ea19f
- (void)forEachAccessClaimOnItemPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007ea069
- (void)forEachDescendantPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007e9f08
- (id)biggestFilePackageLocation;	// IMP=0x00000000007e9ebd
- (_Bool)itemIsFilePackage;	// IMP=0x00000000007e9ca9
- (void)setParent:(id)arg1 name:(id)arg2;	// IMP=0x00000000007e9c00
- (id)pathFromAncestor:(id)arg1;	// IMP=0x00000000007e9b8c
- (id)descendantForFileURL:(id)arg1;	// IMP=0x00000000007e98fc
- (id)childForRange:(struct _NSRange)arg1 ofPath:(id)arg2;	// IMP=0x00000000007e9777
- (id)descendantAtPath:(id)arg1 componentRange:(struct _NSRange)arg2 forAddingLeafNode:(id)arg3 create:(_Bool)arg4;	// IMP=0x00000000007e956a
- (id)descendantAtPath:(id)arg1 componentRange:(struct _NSRange)arg2 create:(_Bool)arg3;	// IMP=0x00000000007e9548
- (id)normalizationOfChildName:(id)arg1;	// IMP=0x00000000007e953f
- (void)removeSelfIfUseless;	// IMP=0x00000000007e94c7
- (void)removeChildForNormalizedName:(id)arg1;	// IMP=0x00000000007e9445
- (void)setChild:(id)arg1 forName:(id)arg2 normalizedName:(id)arg3;	// IMP=0x00000000007e93b3
- (id)pathToDescendantForFileURL:(id)arg1 componentRange:(struct _NSRange *)arg2;	// IMP=0x00000000007e9193
- (void)dealloc;	// IMP=0x00000000007e90e7
- (void)setFirmlinkDestination:(id)arg1;	// IMP=0x00000000007e90c0
- (void)setSymbolicLinkDestination:(id)arg1;	// IMP=0x00000000007e909f
- (void)_setLinkDestination:(id)arg1;	// IMP=0x00000000007e901c
- (id)initWithParent:(id)arg1 name:(id)arg2 normalizedName:(id)arg3;	// IMP=0x00000000007e8f78

@end
