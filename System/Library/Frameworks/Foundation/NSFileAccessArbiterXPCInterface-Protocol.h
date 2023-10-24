//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileAccessArbiter-Protocol.h>

@class NSArray, NSFileAccessClaim, NSFileSubarbitrationClaim, NSNumber, NSSet, NSString, NSURL, NSURLPromisePair, NSUUID, NSXPCListenerEndpoint;
@protocol NSFilePresenterXPCInterface, NSFileProviderXPCInterface;

@protocol NSFileAccessArbiterXPCInterface <NSFileAccessArbiter>
- (void)performBarrierWithCompletionHandler:(void (^)(void))arg1;
- (void)provideSubarbiterDebugInfoIncludingEverything:(_Bool)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;
- (void)provideDebugInfoWithLocalInfo:(NSString *)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;
- (void)getItemHasPresentersAtURL:(NSURL *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)startArbitratingWithReply:(void (^)(void))arg1;
- (oneway void)prepareToArbitrateForURLs:(NSArray *)arg1;
- (void)grantSubarbitrationClaim:(NSFileSubarbitrationClaim *)arg1 withServer:(NSXPCListenerEndpoint *)arg2 reply:(void (^)(NSError *))arg3;
- (oneway void)removeProviderWithID:(NSString *)arg1 uniqueID:(NSUUID *)arg2;
- (void)addProvider:(id <NSFileProviderXPCInterface>)arg1 withID:(NSString *)arg2 uniqueID:(NSUUID *)arg3 forProvidedItemsURL:(NSURL *)arg4 options:(unsigned long long)arg5 withServer:(NSXPCListenerEndpoint *)arg6 reply:(void (^)(_Bool))arg7;
- (oneway void)removePresenterWithID:(NSString *)arg1;
- (void)addPresenter:(id <NSFilePresenterXPCInterface>)arg1 withID:(NSString *)arg2 fileURL:(NSURL *)arg3 lastPresentedItemEventIdentifier:(NSNumber *)arg4 ubiquityAttributes:(NSSet *)arg5 options:(unsigned long long)arg6 responses:(unsigned long long)arg7;
- (oneway void)revokeAccessClaimForID:(NSString *)arg1;
- (void)grantAccessClaim:(NSFileAccessClaim *)arg1 withReply:(void (^)(NSArray *, NSArray *, NSArray *, _Bool, NSError *))arg2;
- (oneway void)writerWithPurposeID:(NSString *)arg1 didMoveItemAtURL:(NSURLPromisePair *)arg2 toURL:(NSURLPromisePair *)arg3 withFSID:(struct fsid)arg4 andFileID:(unsigned long long)arg5;
@end

