//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface CRTextDetectorModelInput : NSObject
{
    struct __CVBuffer *_data;	// 8 = 0x8
}

@property(nonatomic) struct __CVBuffer *data; // @synthesize data=_data;
- (id)featureValueForName:(id)arg1;	// IMP=0x000000000002cf86
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithData:(struct __CVBuffer *)arg1;	// IMP=0x000000000002cf54

@end

