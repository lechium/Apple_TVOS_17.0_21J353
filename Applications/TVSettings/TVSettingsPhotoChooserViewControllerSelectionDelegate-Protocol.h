//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class TVPhotoAsset, TVPhotoCollection, TVPhotoCollectionGroup, TVSettingsPhotoChooserViewController;

@protocol TVSettingsPhotoChooserViewControllerSelectionDelegate <NSObject>

@optional
- (void)controller:(TVSettingsPhotoChooserViewController *)arg1 didSelectAsset:(TVPhotoAsset *)arg2 inCollection:(TVPhotoCollection *)arg3 collectionGroup:(TVPhotoCollectionGroup *)arg4;
- (void)controller:(TVSettingsPhotoChooserViewController *)arg1 didSelectCollectionGroup:(TVPhotoCollectionGroup *)arg2;
@end
