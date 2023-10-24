//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSDictionary, NSSet, NSString, NSUUID;
@protocol TUMomentsControllerDataSourceDelegate;

@protocol TUMomentsControllerDataSource <NSObject>
@property(readonly, copy, nonatomic) NSString *processName;
@property(readonly, nonatomic) int processIdentifier;
@property(nonatomic) __weak id <TUMomentsControllerDataSourceDelegate> delegate;
- (void)invalidate;
- (void)endRequestWithTransactionID:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)startRequestWithMediaType:(int)arg1 forStreamToken:(long long)arg2 requesteeID:(NSString *)arg3 destinationID:(NSString *)arg4 completion:(void (^)(NSString *, NSError *))arg5;
- (void)resetVideoMessagingWithSessionUUID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)saveVideoMessageWithUUID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)sendVideoMessageWithUUID:(NSUUID *)arg1 callUUID:(NSUUID *)arg2 toHandles:(NSSet *)arg3 completion:(void (^)(NSError *))arg4;
- (void)discardVideoMessageWithUUID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)endRecordingMessageWithUUID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)startRecordingMessageWithMediaType:(int)arg1 completion:(void (^)(NSUUID *, NSError *))arg2;
- (void)prewarmAudioClientWithCompletion:(void (^)(NSError *))arg1;
- (void)unregisterStreamToken:(long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)registerStreamToken:(long long)arg1 requesterID:(NSString *)arg2 remoteIDSDestinations:(NSDictionary *)arg3 remoteMomentsAvailable:(_Bool)arg4 completion:(void (^)(TUMomentsCapabilities *, NSError *))arg5;
@end
