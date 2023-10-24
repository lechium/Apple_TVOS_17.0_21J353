//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DownloadsChangeset, ExternalDownloadState;

@interface DownloadsExternalTransaction
{
    DownloadsChangeset *_changeset;	// 16 = 0x10
    ExternalDownloadState *_externalState;	// 24 = 0x18
}

@property(readonly, copy, nonatomic) DownloadsChangeset *changeset; // @synthesize changeset=_changeset;
- (void)unionChangeset:(id)arg1;	// IMP=0x001000000017f3ac
- (void)setValue:(id)arg1 forExternalProperty:(id)arg2 ofDownloadID:(long long)arg3;	// IMP=0x001000000017f38f
- (void)setValue:(id)arg1 forExternalProperty:(id)arg2 ofAssetID:(long long)arg3;	// IMP=0x001000000017f372
- (void)setRestoreReason:(id)arg1;	// IMP=0x001000000017f355
- (void)setExternalPropertyValues:(id)arg1 forDownloadWithID:(long long)arg2;	// IMP=0x001000000017f1e9
- (void)setExternalPropertyValues:(id)arg1 forAssetWithID:(long long)arg2;	// IMP=0x001000000017f07d
- (void)setBytesUploaded:(long long)arg1 forAssetID:(long long)arg2 ofDownloadID:(long long)arg3;	// IMP=0x001000000017f060
- (void)setBytesDownloaded:(long long)arg1 forAssetID:(long long)arg2 ofDownloadID:(long long)arg3;	// IMP=0x001000000017f043
- (void)removeExternalValuesForDownloadID:(long long)arg1;	// IMP=0x001000000017f026
- (void)removeExternalValuesForAssetID:(long long)arg1;	// IMP=0x001000000017f009
- (void)addDownloadChangeTypes:(long long)arg1;	// IMP=0x001000000017efec
- (void)dealloc;	// IMP=0x001000000017ef94
- (id)initWithSessionDescriptor:(id)arg1;	// IMP=0x001000000017ef16

@end

