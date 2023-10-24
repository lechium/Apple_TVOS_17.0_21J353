//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable;

__attribute__((visibility("hidden")))
@interface HBTopShelfStaticImageAssetCache : NSObject
{
    NSMapTable *_images;	// 8 = 0x8
    NSHashTable *_models;	// 16 = 0x10
    NSMapTable *_cellCache;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000099d90
@property(readonly, nonatomic) NSMapTable *cellCache; // @synthesize cellCache=_cellCache;
@property(readonly, nonatomic) NSHashTable *models; // @synthesize models=_models;
@property(readonly, nonatomic) NSMapTable *images; // @synthesize images=_images;
- (id)folderImageForModel:(id)arg1 forCell:(id)arg2;	// IMP=0x0000000000099af8
- (id)init;	// IMP=0x0000000000099a37

@end

