#ifndef SIMULATIONSCENE_H
#define SIMULATIONSCENE_H

#include <QGraphicsScene>
#include <QGraphicsSvgItem>
#include "Entities/Vehicle/vehicle.h"
#include "Entities/trafficdetector.h"
#include "Entities/trafficcontroller.h"
class SimulationScene: public QGraphicsScene
{

public:
    SimulationScene(QGraphicsScene *parent = nullptr);
    uint getNumber(const region &x) const;
    QList<Vehicle *> getVehicle() const;
    QList<Vehicle *> getVehicle(const region &r) const;
    TrafficLight* getTrafficLight(const region &r) const;
    QList<TrafficLight *> getTrafficLight() const;
    QList<TrafficDetector *> getDetector() const;
    /*!
     * \brief Add vehicle to the simulation scene
     * \param vehicle = vehicle to be added
     */
    void addVehicle(Vehicle* vehicle);
    /*!
     * \brief add Detector to the simulation scene
     * \param detector to be added
     */
    void addDetector(TrafficDetector* detector);

    void addLight(TrafficLight* light);
    void removeVehicle(Vehicle* ve);
    void trunOffAllCar();
    void setGoThrought(bool x);
    void resetScene();
    void showTrafficLight();
    void HideTrafficLight();
    void showIntersectionPath(const bool &show);
    TrafficController *getController() const;

private:
    QList<Vehicle* > m_Vehicles;
    TrafficController *m_Controller;
    QGraphicsSvgItem *m_path;

//protected:
//    virtual void mousePressEvent(QGraphicsSceneMouseEvent *mouseEvent);
};

#endif // SIMULATIONSCENE_H
