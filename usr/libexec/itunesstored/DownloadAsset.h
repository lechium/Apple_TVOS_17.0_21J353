//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSMemoryEntity.h>

@interface DownloadAsset : SSMemoryEntity
{
}

+ (Class)databaseEntityClass;	// IMP=0x002000000013ae7e
- (id)description;	// IMP=0x001000000013aebe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000013ae8f
- (id)initWithURLRequestProperties:(id)arg1;	// IMP=0x001000000013ae00
- (id)initWithExternalManifestDictionary:(id)arg1 validateVariants:(_Bool)arg2;	// IMP=0x001000000013a756
- (id)initWithClientXPCAsset:(id)arg1;	// IMP=0x001000000013a5a5
- (id)copyJobAsset;	// IMP=0x00100000000eb898

@end
