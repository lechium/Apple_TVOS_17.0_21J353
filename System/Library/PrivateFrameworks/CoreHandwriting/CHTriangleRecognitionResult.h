//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CHTriangleRecognitionResult
{
    struct CGPoint _vertex1;	// 32 = 0x20
    struct CGPoint _vertex2;	// 48 = 0x30
    struct CGPoint _vertex3;	// 64 = 0x40
}

@property(readonly) struct CGPoint vertex3; // @synthesize vertex3=_vertex3;
@property(readonly) struct CGPoint vertex2; // @synthesize vertex2=_vertex2;
@property(readonly) struct CGPoint vertex1; // @synthesize vertex1=_vertex1;
- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 vertex1:(struct CGPoint)arg4 vertex2:(struct CGPoint)arg5 vertex3:(struct CGPoint)arg6;	// IMP=0x00000000000ddc00

@end

