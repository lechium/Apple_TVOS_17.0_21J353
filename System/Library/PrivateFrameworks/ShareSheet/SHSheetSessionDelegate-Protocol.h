//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShareSheet/NSObject-Protocol.h>

@class LPLinkMetadata, SFCollaborationCloudSharingResult, SHSheetSession, UIActivity;
@protocol SFCollaborationService;

@protocol SHSheetSessionDelegate <NSObject>
- (void)session:(SHSheetSession *)arg1 didChangeMetadata:(LPLinkMetadata *)arg2;
- (id <SFCollaborationService>)collaborationServiceForSession:(SHSheetSession *)arg1;
- (SFCollaborationCloudSharingResult *)collaborationSharingResultForActivity:(UIActivity *)arg1;
- (void)collaborationFooterViewModelDidChangeForSession:(SHSheetSession *)arg1;
- (void)isCollaborativeDidChangeForSession:(SHSheetSession *)arg1;
- (void)headerMetadataDidChangeForSession:(SHSheetSession *)arg1;
- (void)showOptionsDidChangeForSession:(SHSheetSession *)arg1;
- (void)sessionConfigurationDidChangeForSession:(SHSheetSession *)arg1;
@end

