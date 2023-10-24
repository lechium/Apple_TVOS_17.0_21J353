//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShareSheet/NSObject-Protocol.h>

@class CKContainerSetupInfo, CKShare, NSNumber, NSString, NSURL, SFCollaborationCloudSharingRequest;

@protocol SFCollaborationService <NSObject>
- (void)requestDefaultShareModeCollaborationForURL:(NSURL *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;

@optional
- (void)shareStatusForURL:(NSURL *)arg1 completionHandler:(void (^)(long long, NSError *))arg2;
- (void)isShareOwnerOrAdminForFileURL:(NSURL *)arg1 completionHandler:(void (^)(_Bool, _Bool))arg2;
- (void)isShareOwnerForFileURL:(NSURL *)arg1 share:(CKShare *)arg2 completionHandler:(void (^)(_Bool))arg3;
- (void)deleteSharingURL:(NSURL *)arg1 containerSetupInfo:(CKContainerSetupInfo *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)createSharingURLForCollaborationRequest:(SFCollaborationCloudSharingRequest *)arg1 completionHandler:(void (^)(SFCollaborationCloudSharingResult *))arg2;
- (void)saveCollaborativeMode:(NSNumber *)arg1 forContentIdentifier:(NSString *)arg2;
- (void)requestCollaborativeModeForContentIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSNumber *))arg2;
- (void)requestAddParticipantsAllowedForURL:(NSURL *)arg1 share:(CKShare *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)requestSharedURLForFileOrFolderURL:(NSURL *)arg1 completionHandler:(void (^)(NSURL *, NSError *))arg2;
@end

