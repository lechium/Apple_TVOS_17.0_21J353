//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGadgetDelegate-Protocol.h>

@protocol PXGadget;

@protocol PXSharedAlbumInvitationGadgetDelegate <PXGadgetDelegate>

@optional
- (void)gadgetDidReportJunk:(id <PXGadget>)arg1;
- (void)gadget:(id <PXGadget>)arg1 didAccept:(_Bool)arg2;
@end

