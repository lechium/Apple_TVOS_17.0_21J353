//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CPAnnotation
{
    struct CGPDFAnnotation *_cgAnnotation;	// 168 = 0xa8
}

@property struct CGPDFAnnotation *cgAnnotation; // @synthesize cgAnnotation=_cgAnnotation;
- (void)dealloc;	// IMP=0x00000000001008a5
- (id)initWithCGPDFAnnotation:(struct CGPDFAnnotation *)arg1;	// IMP=0x00000000001007fa

@end

