//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HBFolder, HBFolderCellIconVendor, NSString;

__attribute__((visibility("hidden")))
@interface HBFolderCell
{
    HBFolderCellIconVendor *_iconVendor;	// 8 = 0x8
}

+ (id)_baseFolderLayerStackWithInterfaceStyle:(long long)arg1;	// IMP=0x001000000003959f
- (void).cxx_destruct;	// IMP=0x000000000003994c
- (void)_updateIconImagesWithReasons:(unsigned long long)arg1 previousTraitCollection:(id)arg2;	// IMP=0x0000000000039395
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000391f9
- (void)iconImagesDidChange:(id)arg1;	// IMP=0x00000000000391e3
- (void)setDropState:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000039119
- (void)setDropState:(long long)arg1;	// IMP=0x0000000000039105
@property(readonly, nonatomic) HBFolder *folder;
- (void)setItem:(id)arg1;	// IMP=0x0000000000039032
- (id)notificationObject:(id)arg1;	// IMP=0x0000000000038eaf
@property(readonly, nonatomic) HBFolderCellIconVendor *iconVendor; // @synthesize iconVendor=_iconVendor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

