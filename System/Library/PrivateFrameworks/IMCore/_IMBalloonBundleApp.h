//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "IMBalloonApp.h"

@interface _IMBalloonBundleApp : IMBalloonApp
{
    Class _bubbleClass;	// 8 = 0x8
    Class _browserClass;	// 16 = 0x10
    Class _dataSourceClass;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000ef1ca
- (void)setDataSourceClass:(Class)arg1;	// IMP=0x00000000000ef1b6
- (void)setBrowserClass:(Class)arg1;	// IMP=0x00000000000ef1a2
- (void)setBubbleClass:(Class)arg1;	// IMP=0x00000000000ef18e
- (Class)dataSourceClass;	// IMP=0x00000000000ef162
- (Class)browserClass;	// IMP=0x00000000000ef136
- (Class)bubbleClass;	// IMP=0x00000000000ef10a
- (void)_loadBundle;	// IMP=0x00000000000ef0db
- (void)_loadAppBundle;	// IMP=0x00000000000eefa8
- (_Bool)isPreDawnAndAppStoreStickerGenre;	// IMP=0x00000000000eefa0
- (_Bool)isStickerPackOnly;	// IMP=0x00000000000eef98
- (id)initWithPluginBundle:(id)arg1 appBundle:(id)arg2;	// IMP=0x00000000000ee98a

@end
