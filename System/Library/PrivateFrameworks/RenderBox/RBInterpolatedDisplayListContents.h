//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RBInterpolatedDisplayListContents : NSObject
{
    struct objc_ptr<RBDisplayListInterpolator *> _interp;	// 8 = 0x8
    float _progress;	// 16 = 0x10
    struct spin_lock _contents_lock;	// 20 = 0x14
    struct objc_ptr<id<_RBDisplayListContents>> _contents;	// 24 = 0x18
    double _contentsScale;	// 32 = 0x20
}

+ (id)decodedObjectWithData:(id)arg1 delegate:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002d285
- (id).cxx_construct;	// IMP=0x000000000002d385
- (void).cxx_destruct;	// IMP=0x000000000002d360
@property(readonly, nonatomic) const void *_rb_xml_document;
@property(readonly, nonatomic) const void *_rb_contents;
- (id)encodedDataForDelegate:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002d217
@property(readonly, copy, nonatomic) NSString *xmlDescription;
- (void)renderInContext:(struct CGContext *)arg1 options:(id)arg2;	// IMP=0x000000000002d116
- (void)_drawInState:(struct _RBDrawingState *)arg1 alpha:(float)arg2;	// IMP=0x000000000002d0fd
- (void)drawInState:(struct _RBDrawingState *)arg1;	// IMP=0x000000000002d0dc
@property(readonly, nonatomic) struct CGRect boundingRect;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
