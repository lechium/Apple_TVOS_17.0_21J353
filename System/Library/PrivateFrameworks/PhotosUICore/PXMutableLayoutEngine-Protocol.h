//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@protocol PXLayoutDataSourceChangeDetails, PXLayoutEngineDataSourceSnapshot, PXLayoutItem;

@protocol PXMutableLayoutEngine <NSObject>
@property(retain, nonatomic) id <PXLayoutItem> seedItem;
- (void)setDataSourceSnapshot:(id <PXLayoutEngineDataSourceSnapshot>)arg1 withChangeDetails:(id <PXLayoutDataSourceChangeDetails>)arg2;
@end

