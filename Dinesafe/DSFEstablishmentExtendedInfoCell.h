//
//  DSFEstablishmentExtendedCell.h
//  Dinesafe
//
//  Created by Matt Ruten on 2012-12-02.
//  Copyright (c) 2012 Matt Ruten. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import "DSFEstablishment.h"
#import "DSFEstablishmentAnnotation.h"

@interface DSFEstablishmentExtendedInfoCell : UITableViewCell

@property (nonatomic, strong) DSFEstablishment *establishment;

@property (nonatomic, strong) IBOutlet MKMapView *mapView;
@property (nonatomic, strong) IBOutlet UILabel *inspectionsSummary;

@property (nonatomic, strong) DSFEstablishmentAnnotation *annotation;

- (void)updateCellContent;

@end
