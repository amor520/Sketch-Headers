//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSCustomShapeSection.h"

#import "MSInspectorValueAdaptorDelegate-Protocol.h"

@class MSMathInspectorValueAdaptor, MSUpDownTextField, NSArrayController, NSString;

@interface MSPolygonShapeSection : MSCustomShapeSection <MSInspectorValueAdaptorDelegate>
{
    MSMathInspectorValueAdaptor *_sidesAdaptor;
    NSArrayController *_layersController;
    MSUpDownTextField *_sidesField;
}

@property(retain, nonatomic) MSUpDownTextField *sidesField; // @synthesize sidesField=_sidesField;
@property(retain, nonatomic) NSArrayController *layersController; // @synthesize layersController=_layersController;
@property(retain, nonatomic) MSMathInspectorValueAdaptor *sidesAdaptor; // @synthesize sidesAdaptor=_sidesAdaptor;
- (void).cxx_destruct;
- (void)inspectorValueAdaptorDidChangeValue:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
