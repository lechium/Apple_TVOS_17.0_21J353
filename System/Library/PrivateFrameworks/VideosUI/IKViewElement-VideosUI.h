//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKViewElement.h>

@class NSSet, VUIViewElementDataSource;

@interface IKViewElement (VideosUI)
+ (id)_vui_updateEventDescriptorWithType:(unsigned long long)arg1;	// IMP=0x00200000001b7ca1
- (void)_parseElementIfNecessary;	// IMP=0x00100000001b7ced
- (id)vui_imageURL;	// IMP=0x00100000001b7c76
- (id)vui_description;	// IMP=0x00100000001b7c4b
- (id)vui_title;	// IMP=0x00100000001b7c20
@property(readonly, copy, nonatomic) NSSet *vui_updateEventDescriptors;
@property(readonly, nonatomic) VUIViewElementDataSource *vui_DataSource;
@end
