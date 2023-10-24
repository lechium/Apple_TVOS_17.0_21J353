//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/JSExport-Protocol.h>

@class IKDOMCDATASection, IKDOMComment, IKDOMDocumentFragment, IKDOMElement, IKDOMImplementation, IKDOMNode, IKDOMNodeList, IKDOMText, IKJSNavigationDocument, NSString;

@protocol IKJSDOMDocument <JSExport>
@property(readonly, nonatomic) __weak IKJSNavigationDocument *navigationDocument;
@property(retain, nonatomic) NSString *documentURI;
@property(nonatomic) _Bool strictErrorChecking;
@property(retain, nonatomic) NSString *xmlVersion;
@property(nonatomic) _Bool xmlStandalone;
@property(readonly, retain, nonatomic) NSString *xmlEncoding;
@property(readonly, retain, nonatomic) NSString *inputEncoding;
@property(readonly, retain, nonatomic) IKDOMElement *documentElement;
@property(readonly, nonatomic) __weak IKDOMImplementation *implementation;
- (void)setNeedsUpdate;
- (IKDOMNode *)adoptNode:(IKDOMNode *)arg1;
- (IKDOMElement *)getElementById:(NSString *)arg1;
- (IKDOMNodeList *)getElementsByTagName:(NSString *)arg1;
- (IKDOMCDATASection *)createCDATASection:(NSString *)arg1;
- (IKDOMComment *)createComment:(NSString *)arg1;
- (IKDOMText *)createTextNode:(NSString *)arg1;
- (IKDOMDocumentFragment *)createDocumentFragment;
- (IKDOMElement *)createElement:(NSString *)arg1;
@end

