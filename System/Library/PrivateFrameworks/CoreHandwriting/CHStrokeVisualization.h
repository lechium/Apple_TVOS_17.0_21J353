//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CHStrokeProvider;

@interface CHStrokeVisualization
{
    id <CHStrokeProvider> __strokeProviderDrawn;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000170820
- (void)drawStrokesFromStrokeProvider:(id)arg1 inRect:(struct CGRect)arg2 context:(struct CGContext *)arg3;	// IMP=0x00000000001705a0
- (void)drawVisualizationInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 viewBounds:(struct CGRect)arg3;	// IMP=0x0000000000170470
- (void)recognitionSessionDidUpdateRecognitionResult;	// IMP=0x000000000016ff10

@end

