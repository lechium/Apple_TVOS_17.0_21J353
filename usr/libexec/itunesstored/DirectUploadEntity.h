//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSSQLiteEntity.h>

@class MediaSocialPostEntity, NSArray;

@interface DirectUploadEntity : SSSQLiteEntity
{
}

+ (id)databaseTable;	// IMP=0x0040000000106113
+ (id)newEntityValuesWithMediaSocialAttachment:(id)arg1;	// IMP=0x00100000001050e3
- (_Bool)deleteFromDatabase;	// IMP=0x0020000000106120
- (void)setProcessingWithResponse:(id)arg1;	// IMP=0x0010000000105f98
- (long long)setFailedWithError:(id)arg1;	// IMP=0x0010000000105d6e
- (void)resetStatusProperties;	// IMP=0x0010000000105ca1
@property(readonly, nonatomic) MediaSocialPostEntity *postEntity;
- (id)insertEntitiesForArtists:(id)arg1 withProperties:(id)arg2;	// IMP=0x0010000000105958
- (void)deleteAssetFile;	// IMP=0x0010000000105669
@property(readonly, nonatomic) NSArray *artists;

@end

